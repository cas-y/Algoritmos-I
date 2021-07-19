/* Aula 1
Exercício 2
Aluno Yohan Casiraghi CC 1° Semestre */

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
    float result = (nota1*0.3+ nota2*0.4 + nota3*0.3);

    cout << "A média ponderada do aluno é " << result << endl;
}

