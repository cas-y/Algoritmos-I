#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int numero1, numero2, resultado;

    cout << "Primeiro n�mero:" << endl;
    cin >> numero1;
    cout << "Segundo n�mero:" << endl;
    cin >> numero2;
    switch(numero1>numero2){
        case true:
        resultado=numero1-numero2;
        cout << "O resultado do maior para o menor � "<< resultado << endl;
        break;

        case false:
        resultado=numero2-numero1;
        cout << "O resultado do maior para o menor � "<< resultado << endl;
        break;
    }

}
