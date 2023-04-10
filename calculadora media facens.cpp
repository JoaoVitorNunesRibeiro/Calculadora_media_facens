#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


//variaveis que armazenam informações inseridas pelo usúario
int main() {
   char continuar;
   string nome;
   int idade;
   int i = 0;

//DO sendo usado para começar a repetição
   do{

//pede pro usuario inserir seu respectivo nome e o RA
   cout << "Digite seu nome: ";
   cin >> nome;

   cout << "Digite seu RA: ";
   cin >> idade;

//declração das variaveis das avaliações
    double ac1, ac2, ag, af;

//pede pro usuario digitar as notas das avaliações
    cout << "Digite a sua nota da ac1: ";
    cin >> ac1;

    cout << "Digite a sua nota da ac2: ";
    cin >> ac2;

    cout << "Digite a sua nota da ag: ";
    cin >> ag;

    cout << "Digite a sua nota da af: ";
    cin >> af;


//formula para medir o peso de cada nota
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    ag = (ag * 0.10);
    af = (af * 0.50);

//calculo das notas
    double soma = (ac1 + ac2 + af + ag);

//interface do usuario para falar se foi aprovado ou reprovado
    cout << "A sua média do semestre foi: " << soma << endl << endl;

//condição de aprovação com notar superior ou igual a 5
    if (soma >= 5) {
        cout << "Parabéns! Você foi aprovado " << nome << " " << idade << endl;
    }

//condição de recuperação com nota maior que 3 e menor que 5
    else if (soma >3 && soma <5) {
        cout << "Você está em recuperação. Deverá fazer uma prova substitutiva " << nome << " " << idade << endl;
    }

//condição de reprovado com nota inferior ou igual a 3
    else if (soma <= 3) {
        cout << "Eita! Você foi reprovado " << nome << " " << idade << endl;
    }

//pergunta pro usuario responder com "s" ou "n" pra continuar, caso n o programa para
    cout << "Deseja continuar? (s/n) >>> ";
    cin >> continuar;

//WHILE entende com "s" minusculo ou "S" maiusculo que quer voltar a fazer calculos
   } while (continuar == 's' || continuar == 'S');

    return 0;

}