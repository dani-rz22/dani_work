#include <iostream>
using namespace std;

int main()
{

    // Calcular la tarifa electrica segun el consumo en kWh

    int consumo, tarifa;
    float precio = 2.50; 
    //tarifa = consumo * precio;

    cout << "Ingrese la cantidad que consume en kWh" << endl;
    cin >> consumo;

    if (consumo < 100)
    {
        cout << "Su consumo se encuentra en tarifa baja, es decir menor a 100 kWh" << endl;
        cout << "La tarifa de su consumo electrico es: " << consumo*precio;
    }
    else if (consumo > 100 && consumo <= 200)
    {
        cout << "Su consumo se encuentra en tarifa media entre 100 y 200 kWh" << endl;
        cout << "La tarifa de su consumo electrico es: " << consumo*precio;
    }
    else
    {
        cout << "Su consumo se encuentra en tarifa alta, es decir más 200 kWh" << endl;
        cout << "La tarifa de su consumo electrico es: " << consumo*precio;
    }

    return 0;
}
