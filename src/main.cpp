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

//prototipos de funções
void escolherTema(Gui &gui, string &tema, string &palavra);
void apertar(char letra, string &palavra, Gui &gui, size_t btnIndex);
//variaveis globais
int tentativa = 0;
string textOculto;
//temas e palavras
array<string, 6> temas = {"Fruta", "Esporte", "Pais", "Animal", "Cor", "Heroi"};
array<string, 9>frutas = {"uva", "pera", "banana", "abacaxi", "kiwi", "morango", "manga", "melancia", "laranja"};
array<string, 3>esportes = {"futebol", "basquete", "voley"};
array<string, 9>paises = {"brasil", "mexico", "estados unidos", "alemanha", "japao", "canada", "china", "italia", "india"};
array<string, 9>animais = {"urso", "galo", "macaco", "leao", "golfinho", "galinha", "baleia", "peixe", "castor"};
array<string, 10>cores = {"vermelho", "azul", "ciano", "preto", "verde", "marrom", "cinza", "branco", "rosa", "roxo"};
array<string, 9>herois = {"batman", "super man", "mulher maravilha", "flash", "homem aranha", "homem de ferro", "aquaman", "arqueiro verde", "lanterna verde"};

int main(int argc, char *argv[])
{   
    string tema;
    string palavra;

    QApplication app(argc, argv);
    Gui gui;

    escolherTema(gui,tema, palavra);
    
    //evento do teclado
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
//escolhe um tema, e depois uma palavra desse tema
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

    else if(tema == "Animal"){
        random = rand() % animais.size();
        palavra = animais[random];
    }

    else if (tema == "Cor"){
        random = rand() % cores.size();
        palavra = cores[random];
    }
    
    else if (tema == "Heroi"){
        random = rand() % herois.size();
        palavra = herois[random];
    }
    
    //esconde a palavra como _
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
/*
ao clicar em um btn, é verificado se a letra existe dentro da palavra, e então,
se existir, ele adiciona a letra no texto oculto; se não, conta uma tentativa.

se todas as letras forem descobertas a função win é chamada. se o número de tentativas
chegar a 6, a função gameOver é chamada.  
*/

void apertar(char letra, string &palavra, Gui &gui, size_t btnIndex){
    bool acerto = false;
    //verifica se acertou, e troca os _ pela letra
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

    /*
    quando acertar, desativa o btn, e muda a cor para verde. e chama a função win quando todas forem encontradas
    */
    if (acerto){
        gui.btns[btnIndex]->setStyleSheet("background-color: green; color: white;");
        //cria uma copia de textOculto, sem quebras de linha.
        string text = textOculto;
        std::replace(text.begin(), text.end(), '\n', ' ');

        if (text == palavra){
            gui.win();
        }
    }
    /*
    quando errar, conta uma tentativa; 
    desativa o btn e muda sua cor para vermelho;
    muda para o próximo desenho da forca;
    após 5 tentativas, game over.
    */
    else{
        tentativa++;
        gui.btns[btnIndex]->setStyleSheet("background-color: red; color: white;");
        string imagem = "imagens/forca-" + std::to_string(tentativa) + ".png";
        QPixmap pixmap(QString::fromStdString(imagem));
        gui.setForcaImagem(pixmap);
       
        if (tentativa >= 6){
            cout << "game over";
            gui.gameOver(QString::fromStdString(palavra));
        }
    }
    
}