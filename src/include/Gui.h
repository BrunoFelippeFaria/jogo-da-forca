#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QPushButton>
#include <jogoForca.h>
#include <string>
#include <vector>

using std::string;
using std::vector;

class Gui : public QMainWindow{
    public:
        Ui::Form ui;
        vector<QPushButton*> btns;
        void setTemaText(string text);
        void setPalavraText(string text);
        void apertar(char letra);
        void gameOver();
        void win();
        Gui();
};

#endif