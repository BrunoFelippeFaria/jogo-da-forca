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

void escolherTema(Gui &gui, string &tema, string &palavra);

array<string, 3> temas = {"Fruta", "Esporte", "Pais"};
array<string, 2>frutas = {"uva", "pera"};
array<string, 3>esportes = {"futebol", "basquete", "voley"};
array<string, 3>paises = {"brasil", "mexico", "estados unidos"};
string textOculto;

void apertar(char letra, string &palavra, Gui &gui);


int main(int argc, char *argv[])
{   
    string tema;
    string palavra;

    QApplication app(argc, argv);
    Gui gui;

    escolherTema(gui,tema, palavra);
    
    QObject::connect(gui.ui.btnQ, &QPushButton::clicked, [&]{apertar('q', palavra, gui);});
    QObject::connect(gui.ui.btnW, &QPushButton::clicked, [&]{apertar('w', palavra, gui);});
    QObject::connect(gui.ui.btnE, &QPushButton::clicked, [&]{apertar('e', palavra, gui);});
    QObject::connect(gui.ui.btnR, &QPushButton::clicked, [&]{apertar('r', palavra, gui);});
    QObject::connect(gui.ui.btnT, &QPushButton::clicked, [&]{apertar('t', palavra, gui);});
    QObject::connect(gui.ui.btnY, &QPushButton::clicked, [&]{apertar('y', palavra, gui);});
    QObject::connect(gui.ui.bntU, &QPushButton::clicked, [&]{apertar('u', palavra, gui);});
    QObject::connect(gui.ui.btnI, &QPushButton::clicked, [&]{apertar('i', palavra, gui);});
    QObject::connect(gui.ui.btnO, &QPushButton::clicked, [&]{apertar('o', palavra, gui);});
    QObject::connect(gui.ui.btnP, &QPushButton::clicked, [&]{apertar('p', palavra, gui);});

    QObject::connect(gui.ui.btnA, &QPushButton::clicked, [&]{apertar('a', palavra, gui);});
    QObject::connect(gui.ui.btnS, &QPushButton::clicked, [&]{apertar('s', palavra, gui);});
    QObject::connect(gui.ui.btnD, &QPushButton::clicked, [&]{apertar('d', palavra, gui);});
    QObject::connect(gui.ui.btnF, &QPushButton::clicked, [&]{apertar('f', palavra, gui);});
    QObject::connect(gui.ui.btnG, &QPushButton::clicked, [&]{apertar('g', palavra, gui);});
    QObject::connect(gui.ui.btnH, &QPushButton::clicked, [&]{apertar('h', palavra, gui);});
    QObject::connect(gui.ui.btnJ, &QPushButton::clicked, [&]{apertar('j', palavra, gui);});
    QObject::connect(gui.ui.btnK, &QPushButton::clicked, [&]{apertar('k', palavra, gui);});
    QObject::connect(gui.ui.btnL, &QPushButton::clicked, [&]{apertar('l', palavra, gui);});

    QObject::connect(gui.ui.btnZ, &QPushButton::clicked, [&]{apertar('z', palavra, gui);});
    QObject::connect(gui.ui.btnX, &QPushButton::clicked, [&]{apertar('x', palavra, gui);});
    QObject::connect(gui.ui.btnC, &QPushButton::clicked, [&]{apertar('c', palavra, gui);});
    QObject::connect(gui.ui.btnV, &QPushButton::clicked, [&]{apertar('v', palavra, gui);});
    QObject::connect(gui.ui.btnB, &QPushButton::clicked, [&]{apertar('b', palavra, gui);});
    QObject::connect(gui.ui.btnN, &QPushButton::clicked, [&]{apertar('n', palavra, gui);});
    QObject::connect(gui.ui.btnM, &QPushButton::clicked, [&]{apertar('m', palavra, gui);});

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

    palavra = "pera";
    
    for (char c : palavra){
        if (c != ' ')
        {
            textOculto += "_ ";
        }
        else{
            textOculto += '\n';
        }
        
    }

    gui.setTemaText(tema);
    gui.setPalavraText(textOculto);

}

void apertar(char letra, string &palavra, Gui &gui){
    for (size_t i = 0; i < textOculto.size(); i++)
    {
        if (letra == palavra[i])
        {
            textOculto[i] = letra;
        }
        
    }
    cout << textOculto;
    gui.setPalavraText(textOculto);
}