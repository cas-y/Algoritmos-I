/* Aula 1
Exercício 5
Aluno Yohan Casiraghi CC 1° Semestre */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");


    float valor, gorjeta, total;

    cout << "Informe o valor do consumo: ";
    cin >> valor;

    gorjeta = valor*0.15;
    total = gorjeta+valor;
    cout << "O valor da gorjeta (15%) é R$ " << gorjeta << " e o total fica R$ " << total << endl;
}

