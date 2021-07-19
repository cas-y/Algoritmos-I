#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float altura, resultado;
    char sexo;
    cout << "Informe a altura (metros):" << endl;
    cin >> altura;
    cout << "Informe o sexo: (M-Masculino F-Feminino)" << endl;
    cin >> sexo;

   switch(sexo == 'M' || sexo == 'm'){
       case true:
       resultado = (72.7*altura) - 58;
       break;

       default:
       resultado = (62.1*altura) -44.7;
       break;



   }

    
    cout << "O peso ideal é " << resultado << "kg" << endl;

    }
