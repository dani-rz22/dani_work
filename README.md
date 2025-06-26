# dani_work

Repositorio de trabajo en laboratorio de dia martes y jueves :technologist: :green_heart:



Funciones = subalgortimos 

Constan de <"tipo"> <"nombre"> ("<parametros>") {

[return ["<dato>"]; ]
}



#include <iostream>
using namespace std; 

/*Programa que reciba un número entero y determinar si es positivo,
negativo o cero. Donde el numero debe ser ingresado por el usuario.*/

int main(){

    int num; 

    cout << "Ingresa un numero entero: " << endl; 
    cin >> num; 


    if(num >= 0){
        cout << "El numero ingresado es Positivo" << endl;
    }



    return 0; 
}
