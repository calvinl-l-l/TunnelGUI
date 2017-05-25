#include "gs_gui.h"

GS_GUI::GS_GUI(QWidget *parent): QWidget(parent)
{
    setWindowTitle("Tunnel Inspection Ground Station");
    setGeometry(0,0,1500,1000.);

// Widget/item
    QPushButton *btn_openfile = new QPushButton;
    QPushButton *btn_savefile = new QPushButton;
    QPushButton *btn_start = new QPushButton;
    QPushButton *btn_stop = new QPushButton;

    QTextEdit *txtE_cmd = new QTextEdit;

    QTextBrowser *txtB_info = new QTextBrowser;

    QLabel *lb_railIMG = new QLabel;
    lb_railIMG->setText("rail pic");
    //lb_railIMG->setMinimumWidth(1000);

    QLabel *lb_tunnelIMG = new QLabel;
    lb_tunnelIMG->setText("tunnel");

    // OLIVER PLEASE CHANGE THIS TO QVTKWIDGET
    QLabel *lb_dummylabel = new QLabel;
    lb_dummylabel->setText("Please replace me with vtk widget");

// Layout
    QHBoxLayout *layout_main = new QHBoxLayout(this);

    // divide main layout into left and right
    QVBoxLayout *layout_left = new QVBoxLayout();
    QVBoxLayout *layout_right = new QVBoxLayout();

    // within left layout
    QHBoxLayout *layout_botton = new QHBoxLayout();
    QHBoxLayout *layout_plot = new QHBoxLayout();
    QHBoxLayout *layout_scroll = new QHBoxLayout();

    // arranging layout
    layout_left->addLayout(layout_botton,0);
    layout_left->addLayout(layout_plot,6);
    layout_left->addLayout(layout_scroll,4);


    layout_main->addLayout(layout_left,7);
    layout_main->addLayout(layout_right,2);


    // assigning
    layout_botton->addWidget(btn_openfile);
    layout_botton->addWidget(btn_savefile);
    layout_botton->addWidget(btn_start);
    layout_botton->addWidget(btn_stop);

    layout_plot->addWidget(lb_railIMG);
    layout_plot->addWidget(lb_dummylabel);

    layout_scroll->addWidget(lb_tunnelIMG);

    layout_right->addWidget(txtB_info,10);
    layout_right->addWidget(txtE_cmd,1);

}

GS_GUI::~GS_GUI()
{

}
