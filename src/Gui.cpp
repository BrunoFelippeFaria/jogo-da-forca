#include "Gui.h"
#include "jogoForca.h"
#include <string>
#include <iostream>
#include <QPushButton>

using std::cout;
using std::string;

Gui::Gui(){
    ui.setupUi(this);
    btns = {
        ui.btnQ, ui.btnW, ui.btnE, ui.btnR, ui.btnT, ui.btnY, ui.bntU, ui.btnI, ui.btnO, 
        ui.btnP, ui.btnA, ui.btnS, ui.btnD, ui.btnF, ui.btnG, ui.btnH, ui.btnJ, ui.btnK,
        ui.btnL, ui.btnZ, ui.btnX, ui.btnC, ui.btnV, ui.btnB, ui.btnN, ui.btnM
    };

    QPixmap pixmap("../imagens/forca.png");
    if (pixmap.isNull())
    {
        cout << "imagen nao encontrada";
    }

    ui.Forca->setPixmap(pixmap);
    

    show();


}

void Gui::setTemaText(string text){
    ui.TemaLabel->setText(QString::fromStdString(text));
}
void Gui::setPalavraText(string text){
    ui.txtLabel->setText(QString::fromStdString(text));
}
