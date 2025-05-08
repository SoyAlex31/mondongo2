#include <iostream>

using namespace std;

    int main() {
        int descuento;
        //pregunta el costo de sus compras 
        cout <<"Ingrese el costo de su compra: " << endl;
        cin >> descuento;

        //evalua la cantidad de consumo para aplicarle un descuento 
        if(descuento >= 100){
            cout << "usted a aplicado a un descuento del 10%" <<endl;
        } else if(descuento <= 99){
            cout << "Usted no ha a plicado al descuneto" <<endl;
        } 
    }