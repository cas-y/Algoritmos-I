/* Aula 1
Exerc�cio 8
Aluno Yohan Casiraghi CC 1� Semestre */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float base, altura;

    cout << "Informe as dimens�es da base do tri�ngulo (cm): ";
    cin >> base;
    cout << "Informe as dimens�es da altura do tri�ngulo (cm): ";
    cin >> altura;

    float area = (base*altura)/2;

    cout << "A �rea do tri�ngulo � " << area << " cm�" << endl;

}

