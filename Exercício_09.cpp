/* Aula 1
Exerc�cio 9
Aluno Yohan Casiraghi CC 1� Semestre */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, percentual;

    cout << "Informe o sal�rio mensal: R$";
    cin >> salario;
    cout << "Informe o percentual de reajuste (%): ";
    cin >> percentual;

    float salario_novo = salario*(1+(percentual/100));

    cout << "O novo sal�rio com reajuste ser� de R$" << salario_novo << endl;

}

