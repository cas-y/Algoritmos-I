#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
     setlocale(LC_ALL,"Portuguese");
     setprecision(3);
     float temp_C, temp_F;

    cout << "Temperatura em graus Celsius:" << endl;
    cin >> temp_C;

    temp_F = ((temp_C*9)/5)+32;

        cout << "A temperatura em Fahrenheit é "<< temp_F <<" F" << endl;

    }