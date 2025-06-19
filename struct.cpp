#include <iostream>
using namespace std; 

//typedef tipo de dato que ya existe 
typedef int entero; 

//Se parecen a una funcion y ahora es un nuevo tipo de dato
struct Estudiante
{
    //Declaracion del struct termina en punto y coma, el nombre debe de inicar en mayuscula
    string nombre; 
    string carnet; 
    int edad;
};

float funcioncita(string n){

}

struct Estudiante crear_estudiante(){
    struct Estudiante e; 
    cout << "Nombre del estudiante: " << endl; 
    cin >> e.nombre;
    cout << "Carnet del estudiante: " << endl; 
    cin >> e.carnet;
    cout << "Edad del estudiante: " << endl; 
    cin >> e.edad;


    return e; 
};

void mostrar_estudiante(struct Estudiante e){
   
    cout << "Nombre: " << e.nombre << endl; 
    cout << "Edad: " << e.edad << endl;
    cout << "Carnet: " << e.carnet << endl;  
}

entero main(){

    //struct Estudiante e1, e2; //variable tipo struct Estudiante

    //e1.nombre = "Ado Castaneda"; 
    //e1.carnet = "22112024";
    //e1.edad = 19; 

    //e2.nombre = "Dani Ramirez"; 
    //e2.carnet = "22112024";
    //e2.edad = 19; 

   //cout << e1.nombre << "..." << e1.carnet << "..." << e1.edad << "..."; 

   struct Estudiante clase[40]; 
   for (int i = 0; i < 40; i++)
   {
    clase[i] = crear_estudiante();

   }

   for (int i = 0; i < 40; i++)
   {
    mostrar_estudiante(clase[i]); 
   }

   int n; 
   cout << "¿Que estudiante quieres ver?" << endl; 
   cin >> n; 

   //mostrar n y enviar la posicion que ingrese el usuario
   mostrar_estudiante(clase[n]); 
   


    return 0; 
}
