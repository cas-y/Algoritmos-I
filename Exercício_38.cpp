#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int numero;
     string resultado;   
    cout << "Informe o número que represente um mês do ano:" << endl;
    cin >> numero;




    switch(numero){
        case 1:
        cout << "Janeiro" << endl;
        break;

        case 2:
        cout << "Fevereiro" << endl;
        break;

        case 3:
        cout << "Março" << endl;
        break;

        case 4:
        cout << "Abril" << endl;
        break;

        case 5:
        cout << "Maio" << endl;
        break;

        case 6:
        cout << "Junho" << endl;
        break;

        case 7:
        cout << "Julho" << endl;
        break;

        case 8:
        cout << "Agosto" << endl;
        break;

        case 9:
        cout << "Setembro" << endl;
        break;

        case 10:
        cout << "Outubro" << endl;
        break;

        case 11:
        cout << "Novembro" << endl;
        break;

        case 12:
        cout << "Dezembro" << endl;
        break;

        default:
        cout << "O número informado não representa um mês (1-12)" << endl;
    }


}
