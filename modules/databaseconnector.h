#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QObject>
#include <QRunnable>
#include <QSqlDatabase>

class DatabaseConnector : public QObject, public QRunnable
{
    Q_OBJECT
public:
   explicit DatabaseConnector(QSqlDatabase *newConnection, QObject *parent = nullptr);
    ~DatabaseConnector();

   void connectToDatabase();
   void run();
private:
   QSqlDatabase *connection =nullptr;
};

#endif // DATABASECONNECTOR_H
