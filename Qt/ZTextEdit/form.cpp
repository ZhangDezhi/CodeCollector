#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form)
{
setFixedSize(100, 100);
        ui->setupUi(this);


        this->setAcceptDrops(true); //���ý�����ק

        //QWindows�����ޱ���������
        setWindowFlags(Qt::FramelessWindowHint |Qt::WindowMinimizeButtonHint);


        //QDialog
        setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);

        //���ô��屳����ɫ��
        QPalette palette(this->palette());
        palette.setColor(QPalette::Background, Qt::yellow);
        this->setPalette(palette);


}

Form::~Form()
{
    delete ui;
}
