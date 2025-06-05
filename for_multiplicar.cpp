#include <iostream> 
using namespace std; 

int main(){


    //Mostrar las tablas de multiplicar del 1 al 10 del numero que el usuario ingrese 
    int numero=0, multi; 

    cout << "Ingrese un numero para mostrar su tabla de multiplicar" << endl; 
    cin >> numero; 

    for ( int i = 1; i <= 10; i++){
        multi = i * numero; 
        cout << multi << endl; 
    }



    return 0; 
}