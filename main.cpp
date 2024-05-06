#include <QCoreApplication>
#include <QThreadPool>
#include <QSqlDatabase>
#include "modules/databaseconnector.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase database = QSqlDatabase::addDatabase("QPSQL", "psqlMainConnection");

    DatabaseConnector *connector = new DatabaseConnector(&database);

    QThreadPool *pool = QThreadPool::globalInstance();
    connector->setAutoDelete(true);

    pool->start(connector);

    return a.exec();
}
