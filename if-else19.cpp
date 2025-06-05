#include <iostream>
using namespace std;

int main()
{

    // Calcular la tarifa electrica segun el consumo en kWh

    int consumo;

    cout << "Ingrese la cantidad que consume en kWh" << endl;
    cin >> consumo;

    if (consumo < 100)
    {
        cout << "Su consumo se encuentra en tarifa baja, es decir menor a 100 kWh";
    }
    else if (consumo > 100 && consumo <= 200)
    {
        cout << "Su consumo se encuentra en tarifa media entre 100 y 200 kWh";
    }
    else
    {
        cout << "Su consumo se encuentra en tarifa alta, es decir más 200 kWh";
    }

    return 0;
}
