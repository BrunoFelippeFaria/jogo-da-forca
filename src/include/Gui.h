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
    private:
        Ui::Form ui;
    public:
        vector<QPushButton*> btns;
        void setTemaText(string text);
        void setPalavraText(string text);
        void apertar(char letra);
        void gameOver(QString txt);
        void win();
        void setForcaImagem(QPixmap pixmap);
        Gui();
};

#endif