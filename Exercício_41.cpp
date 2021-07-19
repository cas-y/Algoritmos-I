#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int prova1, prova2, prova3, media;
    string resultado;
    cout << "Primeira nota:" << endl;
    cin >> prova1;
    cout << "Segunda nota:" << endl;
    cin >> prova2;
    cout << "Terceira nota:" << endl;
    cin >> prova3;

    media = (prova1+prova2+prova3)/3;


    switch(media){
        case 0 ... 59:
        resultado = "Insuficiente.";
        break;

        case 60 ... 69:
        resultado = "Suficiente.";
        break;

        case 70 ... 89:
        resultado = "Bom.";
        break;

        case 90 ... 100:
        resultado = "Ótimo.";
        break;
       
    }

cout << "Sua média foi de " << media << " pontos. Portanto seu conceito final foi " << resultado << endl;


}
