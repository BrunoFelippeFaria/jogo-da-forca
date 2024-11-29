#include <QApplication>
#include "Gui.h"
#include <string>
#include <random>
#include <time.h>
#include <vector>
#include <array>
#include <iostream>

using std::cout;
using std::string;
using std::array;

int tentativa = 0;
void escolherTema(Gui &gui, string &tema, string &palavra);

array<string, 3> temas = {"Fruta", "Esporte", "Pais"};
array<string, 2>frutas = {"uva", "pera"};
array<string, 3>esportes = {"futebol", "basquete", "voley"};
array<string, 3>paises = {"brasil", "mexico", "estados unidos"};
string textOculto;

void apertar(char letra, string &palavra, Gui &gui, size_t btnIndex);


int main(int argc, char *argv[])
{   
    string tema;
    string palavra;

    QApplication app(argc, argv);
    Gui gui;

    escolherTema(gui,tema, palavra);
    char letras[] = {
        'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
        'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
        'z', 'x', 'c', 'v', 'b', 'n', 'm'
  
    }; 

    for (size_t i = 0; i < gui.btns.size(); i++)
    {
        QObject::connect(gui.btns[i], &QPushButton::clicked, [i, &gui, &palavra, letras]{
            apertar(letras[i], palavra, gui, i);
        }
        );
    }
    
    return app.exec();
}

void escolherTema(Gui &gui, string &tema, string &palavra){
    int random;
    srand(time(0));

    random = rand() % temas.size();
    tema = temas[random];

    if (tema == "Fruta")
    {
        random = rand() % frutas.size();
        palavra = frutas[random];
    }

    else if (tema == "Esporte"){
        random = rand() % esportes.size();
        palavra = esportes[random];
    }

    else if (tema == "Pais"){
        random = rand() % paises.size();
        palavra = paises[random];
    }
    
    for (char c : palavra){
        if (c != ' ')
        {
            textOculto += "_";
        }
        else{
            textOculto += '\n';
        }
        
    }

    gui.setTemaText(tema);
    gui.setPalavraText(textOculto);

}

void apertar(char letra, string &palavra, Gui &gui, size_t btnIndex){
    bool acerto = false;
    
    for (size_t i = 0; i < textOculto.size(); i++)
    {
        if (letra == palavra[i])
        {
            textOculto[i] = letra;
            acerto = true;
        }
    }

    gui.btns[btnIndex]->setDisabled(true);
    gui.setPalavraText(textOculto);

    if (acerto){
        gui.btns[btnIndex]->setStyleSheet("background-color: green; color: white;");

        string text = textOculto;
        cout << text << " " << palavra << "\n";

        std::replace(text.begin(), text.end(), '\n', ' ');

        if (text == palavra){
            gui.win();
        }
    }

    else{
        tentativa++;
        gui.btns[btnIndex]->setStyleSheet("background-color: red; color: white;");
        string imagem = "../imagens/forca-" + std::to_string(tentativa) + ".png";
        QPixmap pixmap(QString::fromStdString(imagem));
        gui.ui.Forca->setPixmap(pixmap);
        if (tentativa >= 6){
            cout << "game over";
            gui.gameOver();
        }
    }

    
}