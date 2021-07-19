#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
    int i,resultado[3] = {};


    cout << "Primeira variável:" << endl;
    cin >> resultado[0];


    cout << "Segunda variável:" << endl;
    cin >> resultado[1];

    
    cout << "Terceira variável:" << endl;
    cin >> resultado[2];


    cout << "Valores dispostos em ordem crescente: " << endl;   
    sort(resultado, resultado + 3);
    for (size_t i = 0; i != 3; ++i)
        cout << resultado[i] << " ";

    }

