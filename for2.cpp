#include <iostream>
using namespace std;

int main() {

    for ( int i = 1; i <= 5; i++) {

        //cada linea imprime * asteriscos 
        for (int j = 1; j <= i; j++){
            cout << "*"; 
        }

        cout << endl; 
    }


    return 0; 
}