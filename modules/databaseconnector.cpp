#include "databaseconnector.h"
#include <QSqlError>
#include <QDebug>

DatabaseConnector::DatabaseConnector(QSqlDatabase *newConnection, QObject *parent)
    : QObject(parent)
{
    connection = newConnection;
}

DatabaseConnector::~DatabaseConnector()
{
    if(connection->isOpen())
    {
        connection->close();
    }
}

void DatabaseConnector::connectToDatabase()
{
    connection->setDatabaseName("******");
    connection->setHostName("******");
    connection->setUserName("******");
    connection->setPassword("****");
    connection->setPort(5432);
}

void DatabaseConnector::run()
{
    connectToDatabase();
    if(!connection->open())
    {
        qWarning() << connection->lastError().text();
    }
}
