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
using std::vector;

//prototipos de funções
void escolherTema(Gui &gui, string &tema, string &palavra);
void apertar(char letra, string &palavra, Gui &gui, size_t btnIndex);
//variaveis globais
int tentativa = 0;
string textOculto;

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

    //temas e palavras
    vector<string> temas = {
        "Fruta", "Esporte", "Pais", "Animal", "Cor", "Heroi", "Objeto", "Profissão",
        "nomes"
    };

    vector<string>frutas = {
        "uva", "pera", "banana", "abacaxi", "kiwi", "morango", "manga", "melancia",
        "laranja", "cereja", "ameixa", "abacate", "goiaba", "maracuja"
    };

    vector<string>esportes = {
        "futebol", "basquete", "voley", "tenis", "ciclismo", "golfe", "boxe"
    };

    vector<string>paises = {
        "brasil", "mexico", "estados unidos", "alemanha", "japao", "canada", "china", "italia", "india", "russia", "espanha", "argentina", "coreia do sul", "egito"
    };

    vector<string>animais = {
        "urso", "galo", "macaco", "leao", "golfinho", "galinha", "baleia", "peixe", 
        "castor", "elefante", "lobo", "cavalo", "tigre", "tartaruga", "porco", "coruja",
        "cachorro", "penguim", "gato", "passaro"
    };

    vector<string>cores = {
        "vermelho", "azul", "ciano", "preto", "verde", "marrom", "cinza", "branco", 
        "rosa", "roxo", "amarelo", "laranja", "dourado"
    };

    vector<string>herois = {
        "batman", "super man", "mulher maravilha", "flash", "homem aranha", "homem de ferro", "aquaman", "arqueiro verde", "lanterna verde"
    };

     vector<string>objetos = {
        "cadeira", "mesa", "caixa", "celular", "computador", "livro", "caneta",
        "telefone", "relogio", "mochila", "lampada"
     };

     vector<string> profissoes = {
        "medico", "pedreiro", "professor", "advogado", "engenheiro", "programador",
        "jornalista", "motorista", "dentista", "pintor", "eletricista", "carpinteiro",
        "policial"
     };

     vector<string> nomes = {
        "ana", "carlos", "jorge", "maria", "pedro", "lucas", "fernanda", "juliana", 
        "rafael", "vitor", "gabriel", "sofia", "eduardo", "beatriz", "isabela"
     };

    vector<vector<string>> palavrasTemas = {
        frutas,
        esportes,
        paises,
        animais,
        cores,
        herois,
        objetos,
        profissoes,
        nomes
    };
    
    random = rand() % temas.size();
    tema = temas[random];

    vector<string> palavras = palavrasTemas[random];
    random = rand() % palavras.size();
    palavra = palavras[random];

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