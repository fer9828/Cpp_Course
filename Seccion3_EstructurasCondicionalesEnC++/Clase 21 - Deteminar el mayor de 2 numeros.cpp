/* Escriba un programa que lea dos numeros y determine cual de ellos es el mayor*/

#include<iostream>

using namespace std;

int main(){
    float numero1, numero2;

    cout<<"Digite dos numeros para determinar cual de ellos es mayor, menor o si son iguales\n";
    cout<<"Digite el primer numero "; cin>>numero1;
    cout<<"Digite el segundo numero "; cin>>numero2;

    if (numero1 == numero2){
        cout<<"Los numeros son iguales\n";
    }

    else if (numero1 > numero2){
        cout<<"El primer numero es mayor\n";
    }
    else{
        cout<<"El segundo numero es mayor\n";
    }
    



    return 0;
}