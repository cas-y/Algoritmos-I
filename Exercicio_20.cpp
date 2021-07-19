#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     setprecision(2);
     float dist, comb, consumo;

    cout << "Qual foi a distância total percorrida pelo automóvel? (Km)" << endl;
    cin >> dist;
    cout << "Qual foi a quantidade de combustível gasta pelo automóvel? (litros):" << endl;
    cin >> comb;

    consumo = dist/comb;

        cout << "O consumo médio do veículo foi de: "<< consumo << " Km/litro" << endl;


    }


