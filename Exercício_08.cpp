/* Aula 1
Exercício 8
Aluno Yohan Casiraghi CC 1° Semestre */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float base, altura;

    cout << "Informe as dimensões da base do triângulo (cm): ";
    cin >> base;
    cout << "Informe as dimensões da altura do triângulo (cm): ";
    cin >> altura;

    float area = (base*altura)/2;

    cout << "A área do triângulo é " << area << " cm²" << endl;

}

