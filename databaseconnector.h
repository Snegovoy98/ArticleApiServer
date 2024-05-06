#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QObject>
#include <QRunnable>

class DatabaseConnector : public QObject, public QRunnable
{
    Q_OBJECT
public:
    DatabaseConnector();
};

#endif // DATABASECONNECTOR_H
