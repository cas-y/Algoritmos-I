/* Aula 1
Exerc�cio 1
Aluno Yohan Casiraghi CC 1� Semestre */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3;

    cout << "Informe a nota da prova 1: ";
    cin >> nota1;
    cout << "Informe a nota da prova 2: ";
    cin >> nota2;
    cout << "Informe a nota da prova 2: ";
    cin >> nota3;
    float result = (nota1 + nota2 + nota3)/3.0;

    cout << "A m�dia do aluno � " << result << endl;




}
