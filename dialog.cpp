#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QColorDialog>
#include <QPalette>
#include <QtGui>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
   //this->setStyleSheet("background-color: rgb(255, 85, 0);");


}

Dialog::~Dialog()
{
    delete ui;
}
//=========


 //============
void Dialog::on_reshenieButton_clicked()
{
    QString firstNumStr = ui->firstLineEdit->text(); //текст берем из первого коошечка
    QString secondNumStr = ui->secondLineEdit->text();// из второго окошечка

    bool ok; //для проверки
    float firstNum = firstNumStr.toFloat ( &ok ); // преобразовываем эти слагаемые в числа
    if (!ok)
    {
            QMessageBox::information(this,"Ошибочка", "Введите вещественное число");
             return;
    }


     float secondNum = secondNumStr.toFloat ( &ok );
     if (!ok)
      {
        QMessageBox::information(this,"Ошибочка", "Введите вещественное число");
        return;
      }


     if(ui->summacheckBox->isChecked())
     {
      float result = firstNum+secondNum;
      ui->resultLineEdit->setText(QString::number(result));
     }

     if(ui->raznostcheckBox->isChecked())
     {
      float result = firstNum-secondNum;
      ui->resultLineEdit->setText(QString::number(result));
     }

     if(ui->proizvedeniecheckBox->isChecked())
     {
      float result = firstNum*secondNum;
      ui->resultLineEdit->setText(QString::number(result));
     }
}

void Dialog::on_col1pushButton_clicked()
{
    //this->setStyleSheet("background-image: url(/Users/Ruslan/app21/pattern_2.png);");
   this->setStyleSheet("background-image:/Users/Ruslan/app21/pattern_2.png;");
//QPixmap pix("/Users/Ruslan/app21/pattern_2.png");
//ui->label_pic->setPixmap(pix);
}

void Dialog::on_col2pushButton_clicked()
{

         //this->setStyleSheet("background-image: url(/Users/Ruslan/app21/pattern_2.png);");
        this->setStyleSheet("background:#D7A5F9;");
    //QPixmap pix("/Users/Ruslan/app21/pattern_2.png");
    //ui->label_pic->setPixmap(pix);
}



void Dialog::on_summacheckBox_clicked()
{

}
