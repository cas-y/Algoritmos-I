/* Aula 1
Exerc�cio 4
Aluno Yohan Casiraghi CC 1� Semestre */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float produto1;

    cout << "Informe o pre�o do produto: R$ ";
    cin >> produto1;

    float result = (produto1*0.9);

    cout << "O valor do produto com desconto de 10% �: R$ " << result << endl;
}

