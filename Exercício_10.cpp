/* Aula 1
Exerc�cio 10
Aluno Yohan Casiraghi CC 1� Semestre */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int int1, int2;

    cout << "Informe o primeiro n�mero inteiro: ";
    cin >> int1;
    cout << "Informe o primeiro n�mero inteiro: ";
    cin >> int2;

    int quociente = int1/int2;
    int resto = int1%int2;

    cout << "O valor do quociente � "<< quociente <<" e o resto � " << resto <<endl;

}

