#ifndef BOARD_H
#define BOARD_H

#include <QMainWindow>
#include <QPushButton>
#include <QFile>
#include <QDebug>
#include <QWidget>
#include <QTableWidget>
#include <QHBoxLayout>
#include <QString>
#include <QList>
#include <QFormLayout>
#include <QRadioButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>

class Board : public QMainWindow
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = nullptr);

};

#endif // BOARD_H
