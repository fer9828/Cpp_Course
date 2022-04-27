/*
    Escriba una funcion nombrada cambio() que tenga un parametro en numero entero (por valor) y seis parametros de referencia
    en numero entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La funcion que 
    considerear el valor entero transmitido como una cantidad en dolares y convertir el valor en el numero
    menor de billetes equivalentes.
*/

#include<iostream>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&); //Un paso de parametro por valor y seis pasos por referencia

int main(){
    int valor,cien,cincuenta,veinte,diez,cinco,uno;

    cout<<"Digite la cantidad en dolares: ";
    cin>>valor;

    cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);

    cout<<"Cantidad de billetes a entregar como cambio: "<<endl;
    cout<<"Cien: "<<cien<<endl;
    cout<<"Cincuenta: "<<cincuenta<<endl;
    cout<<"Veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;

    return 0;
}

void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = valor/100;
    valor %= 100;
    cincuenta = valor/50;
    valor %= 50;
    veinte = valor /20;
    veinte %= 20;
    diez = valor /10;
    valor %= 10;
    cinco = valor/5;
    uno = valor%5;
}