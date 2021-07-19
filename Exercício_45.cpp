#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade;
    string resultado, nome;

    cout << "Informe o nome da pessoa:" << endl;
    cin >> nome;
    cout << "Informe a idade da pessoa:" << endl;
    cin >> idade;

    switch(idade){
        case 0 ... 10:
        resultado ="R$ 30,00.";
        break;

        case 11 ... 29:
        resultado ="R$ 60,00.";
        break;

        case 30 ... 45:
        resultado ="R$ 120,00.";
        break;

        case 46 ... 59:
        resultado ="R$ 150,00.";
        break;

        case 60 ... 65:
        resultado ="R$ 250,00.";
        break;

        default:
        resultado ="R$ 400,00.";
 
    }

cout << "O valor a ser pago por "<< nome <<" é de " << resultado << endl;


}
