#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int idade, ano, mes, dia;

    cout << "Informe a sua idade em dias:" << endl;
    cin >> idade;

    ano = idade/365;
    mes = ((idade/365)-(ano/12))%12;
    dia = (idade-(ano*365 + mes*30));




        cout << ano << " ano (s)" << endl << mes << " mes (es)" << endl << dia << " dia (s)" << endl;

    //cout << "Em 2075 você terá "<<  2075-ano << " anos." << endl;

//        cout << "O valor com desconto de 10% é: R$ "<<  <<  endl;

    }


