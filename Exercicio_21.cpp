#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     float prest_total, prest_pagas, prest_valor, total_pago, saldo_devedor;

    cout << "Informe o número total de prestações:" << endl;
    cin >> prest_total;

    cout << "Informe o número de prestações já pagas:" << endl;
    cin >> prest_pagas;

    cout << "Informe o valor atual da prestação:" << endl;
    cin >> prest_valor;

    total_pago = prest_pagas*prest_valor;
    saldo_devedor = (prest_total*prest_valor)-total_pago;

        cout << "O total já pago foi de: R$ "<< total_pago << endl;

        cout << "O saldo devedor é de: R$ "<<  saldo_devedor << endl;


    }


