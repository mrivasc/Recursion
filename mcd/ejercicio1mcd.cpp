#include <iostream>
using namespace std;

/*Dados dos números enteros llamados mayor y menor, obtener el máximo común divisor
(mcd) de ambos por el método de Euclides. Para resolver este problema se procede así:
a) se realiza la división entera del mayor entre el menor, b) si el residuo es cero, el mcd
está en la variable llamada menor, despliega el resultado y termina el programa, c) pero
si el residuo no es cero, el valor de menor pasa a mayor y el valor de residuo pasa a
menor, d) repetir el paso a.
*/

int mcd(int higher, int smaller);

int main(){
    int higher=0, smaller=0;
    cout << "\n\nCALCULANDO MAXIMO COMUN DIVIDOR (mcd)\n\n";

    cout << "Entero 1: "; cin >> higher;
    cout << "Entero 2: "; cin >> smaller;

    if(smaller > higher){
        int aux = smaller;
        smaller = higher;
        higher = aux;
    }
    cout << endl;
    cout << "El mcd de " << higher << " y " << smaller << " es: " << mcd(higher, smaller) << endl << endl;
}

int mcd(int higher, int smaller){
    int remainder=0, q=0;

    if(higher%smaller != 0){
        remainder = higher%smaller;
        mcd(smaller, remainder);
    } 

    else if(higher%smaller == 0){
        q = higher / smaller;
        return smaller;
    }
}