#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    /* Vari�veis */
    float vel_perm, vel_mot, excesso;
    int porcentagem;
    string resultado;

    /* Input */
    cout << "Velocidade permitida na via (km/h):" << endl;
    cin >> vel_perm;

    cout << "Velocidade do motorista (km/h):" << endl;
    cin >> vel_mot;

    /* C�lculos */
    porcentagem = ((vel_mot/vel_perm)-1)*100;
    excesso =  vel_mot - (vel_perm);
   



    /* Condicional */
   if (porcentagem<=20)
   {
        resultado = "R$ 102,00.";
   }
   else
   {
        resultado = "R$ 500,00.";
   }


    /*  Resultado Sa�da em texto  */
    cout << "Voc� excedeu a velocidade em " << excesso << " km/h ("<< porcentagem << "%). Portanto sua multa ser� de " << resultado << endl;


}