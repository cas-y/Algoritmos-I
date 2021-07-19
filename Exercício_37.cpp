/*37) Escrever um algoritmo e  um programa que  leia um número inteiro. 
Mostrar se o número lido é “par”ou “ímpar”.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int64_t numero; /* Coloquei int64 pois números muito grandes não estavam funcionando*/
     string resultado;

    cout << "Informe um número:" << endl;
    cin >> numero;

    switch (numero%2==0)
    {
    case true:
       resultado = "O número é par";
        break;
    
    default:
    resultado = "O número é impar";
        break;
    }

    cout << resultado << endl;

}