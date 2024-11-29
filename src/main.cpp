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
array<string, 3>frutas = {"uva", "maçã", "pera"};
array<string, 3>esportes = {"futebol", "basquete", "voley"};
array<string, 3>paises = {"brasil", "mexico", "estados unidos"};
string textOculto;

int main(int argc, char *argv[])
{   
    string tema;
    string palavra;

    QApplication app(argc, argv);
    Gui gui;

    escolherTema(gui,tema, palavra);
    
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
            textOculto += "_ ";
        }
        else{
            textOculto += '\n';
        }
        
    }

    gui.setTemaText(tema);
    gui.setPalavraText(textOculto);

}