#include "Gui.h"
#include "jogoForca.h"
#include <string>
#include <iostream>
#include <QPushButton>
#include <QMessageBox>

using std::cout;
using std::string;

Gui::Gui(){
    ui.setupUi(this);
    //teclado
    btns = {
        ui.btnQ, ui.btnW, ui.btnE, ui.btnR, ui.btnT, ui.btnY, ui.bntU, ui.btnI, ui.btnO, 
        ui.btnP, ui.btnA, ui.btnS, ui.btnD, ui.btnF, ui.btnG, ui.btnH, ui.btnJ, ui.btnK,
        ui.btnL, ui.btnZ, ui.btnX, ui.btnC, ui.btnV, ui.btnB, ui.btnN, ui.btnM
    };
    //coloca a imagem inicial da forca
    QPixmap pixmap("imagens/forca.png");
    if (pixmap.isNull())
    {
        cout << "imagem nao encontrada";
    }
    ui.Forca->setPixmap(pixmap);
    //configurações da janela
    setFixedSize(width(),height());
    show();
}

//muda o texto do tema
void Gui::setTemaText(string text){
    ui.TemaLabel->setText(QString::fromStdString(text));
}
//muda a palavra
void Gui::setPalavraText(string text){
    ui.txtLabel->setText(QString::fromStdString(text));
}

//game over, fecha o programa.
void Gui::gameOver(QString txt){
    txt = "você perdeu, a paravra era " + txt;
    QMessageBox::critical(this, "Game over", txt);
    QApplication::quit();
}

//vitoria! também fecha o programa.
void Gui::win(){
    QMessageBox::information(this, "Vitoria!", "parabéns, você acertou!");
    QApplication::quit();
}

//muda a imagem da forca.
void Gui::setForcaImagem(QPixmap pixmap){
    ui.Forca->setPixmap(pixmap);
}
