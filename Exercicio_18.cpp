#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     setprecision(3);
     float dinheiro;

    cout << "Quantidade de dinheiro (R$):" << endl;
    cin >> dinheiro;

        cout << "O valor do seu dinheiro convertido para d�lar �: "<< dinheiro/1.80 << endl;

        cout << "O valor do seu dinheiro convertido para marco alem�o �:" << dinheiro/2.00 << endl;

        cout << "O valor do seu dinheiro convertido para libra esterlina �:" << dinheiro/3.57 << endl;


    }


