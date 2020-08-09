#ifndef QMARKS_H
#define QMARKS_H

#include <QMainWindow>

namespace Ui {
class QMarks;
}

class QMarks : public QMainWindow
{
    Q_OBJECT

public:
    explicit QMarks(QWidget *parent = nullptr);
    ~QMarks();

private slots:
    void on_b025_clicked();

    void on_b05_clicked();

    void on_b075_clicked();

    void on_b1_clicked();

    void on_b125_clicked();

    void on_b15_clicked();

    void on_b175_clicked();

    void on_b2_clicked();

    void on_b225_clicked();

    void on_b25_clicked();

    void on_b275_clicked();

    void on_b3_clicked();

    void on_b325_clicked();

    void on_b35_clicked();

    void on_b375_clicked();

    void on_b4_clicked();

    void on_b425_clicked();

    void on_b45_clicked();

    void on_b475_clicked();

    void on_b5_clicked();

    void on_clearButton_clicked();

    void on_undoButton_clicked();

private:
    QList<double> *operands;
    double sum;

    void addOperand(QString);
    void compute();

private:
    Ui::QMarks *ui;
};

#endif // QMARKS_H
