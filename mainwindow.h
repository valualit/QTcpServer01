#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QTcpSocket>
#include <QObject>
#include <QByteArray>
#include <QDebug>

namespace Ui {
    class MainWindow;
}

class QTcpServer;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_starting_clicked();
    void on_stoping_clicked();
    void newuser();
    void slotReadClient();

private:
    Ui::MainWindow *ui;
    QTcpServer *tcpServer;
    int server_status;
    QMap<int,QTcpSocket *> SClients;
};

#endif // MAINWINDOW_H
