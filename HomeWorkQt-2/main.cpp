#include <QCoreApplication>

#include <QtNetwork/QTcpServer>
#include <QtSql/QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTcpServer tcp;
    QSqlDatabase sql_base;
    return a.exec();
}
