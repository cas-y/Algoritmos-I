#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float litros, valor, resultado;
    char tipo;
    cout << "Informe o n�mero de litros vendido:" << endl;
    cin >> litros;
    cout << "Informe o tipo de combust�vel: (A-�lcool G-Gasolina)" << endl;
    cin >> tipo;

    if (tipo == 'A' || 'a')
    {
        valor = 1.650;
        if(litros <= 15){
            resultado=(litros*valor*0.965);
        }
        else
        {
            resultado=(litros*valor*0.94);

        }
    }
    else
    {
        valor = 2.590;
        if(litros <= 20){
            resultado=(litros*valor*0.97);
        }
        else
        {
            resultado=(litros*valor*0.95);

        }


    }
    
    cout << "O valor a ser pago � R$ " << resultado << endl;

    }
