/*37) Escrever um algoritmo e  um programa que  leia um n�mero inteiro. 
Mostrar se o n�mero lido � �par�ou ��mpar�.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int64_t numero; /* Coloquei int64 pois n�meros muito grandes n�o estavam funcionando*/
     string resultado;

    cout << "Informe um n�mero:" << endl;
    cin >> numero;

    switch (numero%2==0)
    {
    case true:
       resultado = "O n�mero � par";
        break;
    
    default:
    resultado = "O n�mero � impar";
        break;
    }

    cout << resultado << endl;

}