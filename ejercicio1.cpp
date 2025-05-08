#include <iostream>

using namespace std;

    int main() {
        int edad;
        //agrega el numero manualmente
        cout <<"Ingrese su edad: " << endl;
        cin >> edad;

        //evalua el numero que el usuario ingreso
        if(edad >= 18){
            cout << "Usted es mayor de edad" <<endl;
        } else if(edad < 18){
            cout << "Usted es menor de edad" <<endl;
        } 

}