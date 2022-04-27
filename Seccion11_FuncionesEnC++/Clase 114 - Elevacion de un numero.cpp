/* 
    Escriba una funcion nombrada funpot() que eleve un numero entero que se le
    transmita a una potencia en numero entero positivo y despliegue el resultado.
    El numero entero positivo deberá ser el segundo valor transmitido a la función
*/ 

#include<iostream>
#include<math.h>

using namespace std;

//Prototipos de funciones

void pedirDatos();
void funpot(float x, float y); // Como nos piden que despliegue pero no retorne entonces se utiliza void y no otra

float numero,exponente; //Aqui se declaran estas variables de tipo global

int main(){
    pedirDatos();
    funpot(numero,exponente);


    return 0;
}

void pedirDatos(){
    cout<<"Digite el número: ";
    cin>>numero;

    cout<<"Digite el exponente: ";
    cin>>exponente;


}

void funpot(float x, float y){

    long elevacion = pow(numero, exponente);

    cout<<numero<<" elevado a "<<exponente<<" es igual a: "<<elevacion<<endl;    
}