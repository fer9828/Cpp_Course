/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo 
de 24 horas. Es decir,  debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura
más alta y la temperatura más baja*/ 

#include<iostream>

using namespace std;

int main(){

    float temperatura, mayor=0, menor=9999999;
    float sumaTotal=0, promedio=0;

    for(int i=0; i<24; i+=4){ //El i+=4 sirve para aumentar de 4 en 4
        cout<<"Digite la temperatura de la hora "<<i<<": ";
        cin>>temperatura;

        sumaTotal += temperatura; // sumaTotal = sumaTotal + temperatura

        if(temperatura > mayor){
            mayor = temperatura;
        }
        if(temperatura < menor){
            menor = temperatura;
        }

    }

    promedio = sumaTotal/6;

    cout<<"\nTemperatura Promedio: "<<promedio<<endl;
    cout<<"\nTemperatura Mayor: "<<mayor<<endl;
    cout<<"\nTemperatura Menor: "<<menor<<endl;

    return 0;
}