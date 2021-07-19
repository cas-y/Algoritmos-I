#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int ano, ano_atual, idade ;

    cout << "Ano em que você nasceu:" << endl;
    cin >> ano;
    cout << "Ano atual:" << endl;
    cin >> ano_atual;

    idade = ano_atual-ano;

        cout << "Idade é: "<< idade << endl;

        cout << "Em 2075 você terá "<<  2075-ano << " anos." << endl;

//        cout << "O valor com desconto de 10% é: R$ "<<  <<  endl;

    }


