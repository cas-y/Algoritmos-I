/*Exerc�cio 13
Aluno Yohan Casiraghi CC 1� Semestre

Pedrinho tem um cofrinho com muitas moedas e deseja saber quantos reais conseguiu poupar.
Fa�a um algoritmo para ler a quantidade de cada tipo de moeda e mostre o valor total
economizado em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos e ainda moeda
de 1 real. N�o havendo moeda de um destes tipos, a quantidade respectiva � zero.*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float total;
    int quant;

    cout << "Informe a quantidade de moedas de 1 centavo: ";
    cin >> quant;
    total += quant*0.01;

    cout << "Informe a quantidade de moedas de 5 centavos: ";
    cin >> quant;
    total += quant*0.05;

    cout << "Informe a quantidade de moedas de 10 centavos: ";
    cin >> quant;
    total += quant*0.10;

    cout << "Informe a quantidade de moedas de 25 centavos: ";
    cin >> quant;
    total += quant*0.25;

    cout << "Informe a quantidade de moedas de 50 centavos: ";
    cin >> quant;
    total += quant*0.50;

    cout << "Informe a quantidade de moedas de 1 real: ";
    cin >> quant;
    total += quant;

    cout << "O valor total economizado � R$"<< total << endl;

}
