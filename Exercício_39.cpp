#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int numero;
     string resultado;   
    cout << "Informe um n�mero de 0 a 9:" << endl;
    cin >> numero;




    switch(numero){

        case 0:
        cout << "Zero" << endl;
        break;

        case 1:
        cout << "Um" << endl;
        break;

        case 2:
        cout << "Dois" << endl;
        break;

        case 3:
        cout << "Tr�s" << endl;
        break;

        case 4:
        cout << "Quatro" << endl;
        break;

        case 5:
        cout << "Cinco" << endl;
        break;

        case 6:
        cout << "Seis" << endl;
        break;

        case 7:
        cout << "Sete" << endl;
        break;

        case 8:
        cout << "Oito" << endl;
        break;

        case 9:
        cout << "Nove" << endl;
        break;

        default:
        cout << "N�mero Inv�lido" << endl;
    }
}