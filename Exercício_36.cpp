/*Faça  um  algoritmo  que receba  três  alturas  e
informe  a  altura  que  estiver  na  situação  de  maior altura.*/

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     float altura1, altura2, altura3, resultado;

    cout << "Primeira altura:" << endl;
    cin >> altura1;
    cout << "Segunda altura:" << endl;
    cin >> altura2;
    cout << "Terceira altura:" << endl;
    cin >> altura3;
    
    if(altura1>altura2){
        resultado = altura1;  
    }
    else if(altura2>altura3){
        resultado = altura2;
    }
    else
    {
        resultado = altura3;
    }
      
        cout << "A maior altura é de "<< resultado << endl;
      
    }

