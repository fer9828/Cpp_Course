/*
    Ejercicio 1: Escriba una función llamada mult () que acepte dos numeros en punto
    flotante como parametros, multiplique estos dos numeros y despliegue el resultado
*/ 

#include<iostream>

using namespace std;

//Prototipos de Funciones

void pedirDatos();
void mult(float x, float y); // Como nos piden que despliegue pero no retorne entonces se utiliza void y no otra

float num1,num2; //Aqui se declaran estas variables de tipo global 

int main(){
    pedirDatos();
    mult(num1,num2);

    return 0; 
}

void pedirDatos(){
    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;
}

void mult(float x, float y){
    float multiplicacion = x * y;

    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}