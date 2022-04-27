/* 
    Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real,
    convertirlos a sus respectivos valores y por ultimos sumarlos
*/ 

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){

    char cad1[20];
    char cad2[20];

    int num1;
    float num2;

    cout<<"Digite un numero entero: ";
    cin.getline(cad1,20,'\n');

    cout<<"Digite un numero flotante: ";
    cin.getline(cad2,20,'\n');

    num1 = atoi(cad1);
    num2 = atof(cad2);

    cout<<"El resultado de la suma es: "<<num1+num2<<endl;


    return 0;
}