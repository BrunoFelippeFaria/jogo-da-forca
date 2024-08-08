#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  vector<string> palavras = {"urso",  "gato",    "suco",  "sapato",
                             "ferro", "sorvete", "milho", "passaro"};
inicio:

  srand(time(0));
  string palavra = palavras[rand() % palavras.size() + 1];

  int tentativas = 6;
  string texto;

  for (char i : palavra) {
    texto += "_";
  }

  while (true) {
#ifdef _WIN32  // windows
    system("cls");
#else  // unix
    system("clear");
#endif
    cout << "======================" << "\n";
    cout << "    JOGO DA FORCA    " << "\n";
    cout << "======================" << "\n";

    cout << "tentativas: " << tentativas << "\n";

    cout << texto << "\n\n";

    char letra;
    cout << "digite uma letra : ";
    cin >> letra;

    bool acerto = false;

    for (int i = 0; i < palavra.length(); i++) {
      if (letra == palavra[i]) {
        texto[i] = palavra[i];
        acerto = true;
      }
    }

    if (acerto == false) {
      tentativas--;
    }

    if (palavra == texto) {
      cout << "parabéns! você acertou! a palavra era " << texto << "\n";
      break;
    }

    if (tentativas < 1) {
      cout << "você errou... a palavra era " << palavra << "\n";
      break;
    }
  }

  char opt;
  cout << "quer jogar mais uma vez? [s/n]: ";
  cin >> opt;

  if (opt == 's' or opt == 'S') {
    goto inicio;
  }

  return 0;
}
