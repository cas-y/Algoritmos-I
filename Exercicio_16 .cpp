#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     float salario, kwh, valor_unit,valor_reais, valor_desconto;

    cout << "Sal�rio:" << endl;
    cin >> salario;
    cout << "Quantidade de KW/h:" << endl;
    cin >> kwh;

    valor_unit = (salario/7)/100;
    valor_reais = valor_unit*kwh;
    valor_desconto = valor_reais*0.9;

        cout << "O valor unit�rio de cada KW �: R$ "<< valor_unit << endl;

        cout << "O total a ser pago �: R$ "<< valor_reais << endl;

        cout << "O valor com desconto de 10% �: R$ "<< valor_desconto <<  endl;

    }
