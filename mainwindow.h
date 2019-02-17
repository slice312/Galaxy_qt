#ifndef MAINWINDOW_H_INCLUDED
#define MAINWINDOW_H_INCLUDED

#include <QMainWindow>
#include <QPushButton>
#include "galaxymodelwidget.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow* ui;
    GalaxyModelWidget* model;
    QPushButton* nextButton;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


};

#endif // MAINWINDOW_H_INCLUDED
