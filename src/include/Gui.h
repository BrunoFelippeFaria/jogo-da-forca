#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <jogoForca.h>

class Gui : public QMainWindow{
    public:
        Gui();
    private:
        Ui::Form ui;
};

#endif