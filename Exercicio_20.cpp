#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     setprecision(2);
     float dist, comb, consumo;

    cout << "Qual foi a dist�ncia total percorrida pelo autom�vel? (Km)" << endl;
    cin >> dist;
    cout << "Qual foi a quantidade de combust�vel gasta pelo autom�vel? (litros):" << endl;
    cin >> comb;

    consumo = dist/comb;

        cout << "O consumo m�dio do ve�culo foi de: "<< consumo << " Km/litro" << endl;


    }


