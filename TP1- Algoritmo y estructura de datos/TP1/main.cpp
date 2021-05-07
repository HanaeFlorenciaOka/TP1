#include <iostream>

using namespace std;

int main(void)
{
    double Distancia, Tiempo, Vms, Vkh;
    int Min, Seg, Cen;

    cout <<"Ingresar la distancia recorrida en metros:"<< endl;
    cin >> Distancia;
    cout <<"Ingresar la cantidad del recorrido en minutos:"<< endl;
    cin >> Min;
    cout <<"Ingresar la cantidad del recorrido en segundos:"<< endl;
    cin >> Seg;
    cout <<"Ingresar la cantidad del recorrido en centecimas:"<< endl;
    cin >> Cen;

    Tiempo = (Min*60) + Seg + (Cen/100);
    Vms = Distancia / Tiempo;
    Vkh = (Vms*3600)/ 1000;

    cout <<"La velocidad en kilometros por hora es de:"<< Vkh <<endl;

}
