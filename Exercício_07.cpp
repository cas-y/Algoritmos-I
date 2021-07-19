/* Aula 1
Exercício 7
Aluno Yohan Casiraghi CC 1° Semestre */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float tot_eleit, vot_brancos,vot_nulos,vot_validos;

    cout << "Informe o número total de eleitores: ";
    cin >> tot_eleit;
    cout << "Informe o número de votos brancos: ";
    cin >> vot_brancos;
    cout << "Informe o número de votos nulos: ";
    cin >> vot_nulos;
    cout << "Informe o número de votos válidos: ";
    cin >> vot_validos;

    float vot_brancos_percent = (vot_brancos/tot_eleit)*100;
    float vot_nulos_percent = (vot_nulos/tot_eleit)*100;
    float vot_validos_percent = (vot_validos/tot_eleit)*100;

        cout << "Votos brancos representam " << vot_brancos_percent << " % dos votos." << endl;
        cout << "Votos nulos representam " << vot_nulos_percent << " % dos votos." << endl;
        cout << "Votos válidos representam " << vot_validos_percent << " % dos votos." << endl;
}

