#include <iostream> 
using namespace std; 

int main(){

    int n, suma=0; 

    cout << "Ingresa un numero entero" << endl; 
    cin >> n;  

    //ciclo for para sumar los numeros del usuario 
    for (int i = 1; i<=n; i++){
        suma += i; 
        suma = suma + i; //se suma el valor de i en cada variable 
    }

    //se imprimen los resultados 
    cout << "La suma de los primeros " << n << " numeros es: " << suma; 


    return 0; 
}