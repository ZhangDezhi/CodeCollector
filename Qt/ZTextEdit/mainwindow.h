#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "form.h"
#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

        bool eventFilter(QObject *watched, QEvent *event);   //�¼�����

private:
    Ui::MainWindow *ui;
    Form *m_form;     //��ʾ�Ŀ�
};

#endif // MAINWINDOW_H
