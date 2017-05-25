#ifndef GS_GUI_H
#define GS_GUI_H

// Qt
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QTextBrowser>

// PCL

//VTK


class GS_GUI : public QWidget
{
    Q_OBJECT

public:
    GS_GUI(QWidget *parent = 0);
    ~GS_GUI();
};

#endif // GS_GUI_H
