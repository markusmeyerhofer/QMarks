#include "qmarks.h"
#include "ui_qmarks.h"

QMarks::QMarks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QMarks)
{
    operands = new QList<double>();
    ui->setupUi(this);
}

QMarks::~QMarks()
{
    delete ui;
    delete operands;
}

void QMarks::addOperand(QString operand)
{
    double newOperand = operand.toDouble();
    operands->append(newOperand);
    this->compute();
}

void QMarks::compute()
{
    sum = 0.0;
    QListIterator<double> iter(*operands);
    int i = 0;
    while (iter.hasNext())
    {
        double nextOperand = iter.next();
        sum += nextOperand;

        if (i == 0)
        {
            ui->operandsLineEdit->setText(QString::number(nextOperand));
        } else
        {
            auto operandsText = ui->operandsLineEdit->text();
            operandsText.append(" + " + QString::number(nextOperand));
            ui->operandsLineEdit->setText(operandsText);
        }

        if (!operands->isEmpty())
        {
            double avg = sum/operands->size();
            ui->averageLineEdit->setText("⨏ " + QString::number(avg));
        }
        else
        {
            ui->averageLineEdit->setText("⨏ " + QString::number(0));
        }
        ui->averageLineEdit->repaint();

        i++;
    }
    ui->sumLineEdit->setText("∑ " + QString::number(sum));
    ui->sumLineEdit->repaint();
}

void QMarks::on_clearButton_clicked()
{
    operands = new QList<double>();
    this->compute();
    ui->operandsLineEdit->setText(QString::number(0));
    ui->averageLineEdit->setText("⨏ " + QString::number(0));
    ui->averageLineEdit->repaint();
    ui->operandsLineEdit->repaint();
}

void QMarks::on_undoButton_clicked()
{
    if (!operands->isEmpty())
    {
        operands->removeLast();
    }

    if (operands->isEmpty())
    {
        ui->operandsLineEdit->setText(QString::number(0));
        ui->averageLineEdit->setText("⨏ " + QString::number(0));
    }

    this->compute();
}

void QMarks::on_b025_clicked()
{
    this->addOperand(ui->b025->text());
}

void QMarks::on_b05_clicked()
{
    this->addOperand(ui->b05->text());
}

void QMarks::on_b075_clicked()
{
    this->addOperand(ui->b075->text());
}

void QMarks::on_b1_clicked()
{
    this->addOperand(ui->b1->text());
}

void QMarks::on_b125_clicked()
{
    this->addOperand(ui->b125->text());
}

void QMarks::on_b15_clicked()
{
    this->addOperand(ui->b15->text());
}

void QMarks::on_b175_clicked()
{
    this->addOperand(ui->b175->text());
}

void QMarks::on_b2_clicked()
{
    this->addOperand(ui->b2->text());
}

void QMarks::on_b225_clicked()
{
    this->addOperand(ui->b225->text());
}

void QMarks::on_b25_clicked()
{
    this->addOperand(ui->b25->text());
}

void QMarks::on_b275_clicked()
{
    this->addOperand(ui->b275->text());
}

void QMarks::on_b3_clicked()
{
    this->addOperand(ui->b3->text());
}

void QMarks::on_b325_clicked()
{
    this->addOperand(ui->b325->text());
}

void QMarks::on_b35_clicked()
{
    this->addOperand(ui->b35->text());
}

void QMarks::on_b375_clicked()
{
    this->addOperand(ui->b375->text());
}

void QMarks::on_b4_clicked()
{
    this->addOperand(ui->b4->text());
}

void QMarks::on_b425_clicked()
{
    this->addOperand(ui->b425->text());
}

void QMarks::on_b45_clicked()
{
    this->addOperand(ui->b45->text());
}

void QMarks::on_b475_clicked()
{
    this->addOperand(ui->b475->text());
}

void QMarks::on_b5_clicked()
{
    this->addOperand(ui->b5->text());
}
