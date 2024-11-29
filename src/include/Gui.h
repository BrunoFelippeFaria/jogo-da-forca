#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <jogoForca.h>
#include <string>

using std::string;

class Gui : public QMainWindow{
    private:
        Ui::Form ui;
    public:
        void setTemaText(string text);
        void setPalavraText(string text);
        Gui();
};

#endif