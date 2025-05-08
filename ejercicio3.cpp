#include <iostream>

using namespace std;

    int main() {
        int uno, dos;
        //agrega primer numero
        cout <<"Ingrese su Primer numero: " << endl;
        cin >> uno;

        //agrega segundo numero
        cout <<"Ingrese su segundo numero: " << endl;
        cin >> dos;

        //evalua el numero que el usuario ingreso para calcular cual es mayor o igual cada uno 
        if(uno == dos){
            cout << "Los numeros agregados son iguales" <<endl;
        } else if(uno < dos){
            cout << "El numero:"<<uno<<" es Menor a:"<<dos <<endl;
        } else if(uno > dos){
            cout << "El numero:"<<uno<<" es Mayor a:"<<dos <<endl;
        } 

}