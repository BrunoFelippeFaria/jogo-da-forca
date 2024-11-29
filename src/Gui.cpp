#include "Gui.h"
#include "jogoForca.h"
#include <string>
#include <iostream>
#include <QPushButton>

using std::cout;
using std::string;

Gui::Gui(){
    ui.setupUi(this);
    show();
}

void Gui::setTemaText(string text){
    ui.TemaLabel->setText(QString::fromStdString(text));
}
void Gui::setPalavraText(string text){
    ui.txtLabel->setText(QString::fromStdString(text));
}
