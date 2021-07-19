/* Aula 1
Exercício 6
Aluno Yohan Casiraghi CC 1° Semestre */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor;

    cout << "Informe o número a ser calculado: ";
    cin >> valor;

    int quadr = pow(valor,2);
    int cubo = pow(valor,3);
    cout << "O valor do quadrado de "<< valor << " é " << quadr << " e o cubo é " << cubo << endl;
}

