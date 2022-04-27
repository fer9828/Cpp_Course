// Estructura basica en C++

#include<iostream>

using namespace std;

struct Persona
{
    char nombre[20];
    int edad; 
}
persona1 = {"Fernando",23},
persona2 = {"Alonso", 27};

int main(){
    cout<<"Nombre 1: "<<persona1.nombre<<endl;
    cout<<"Edad 1: "<<persona1.edad<<endl;
    cout<<"Nombre 2: "<<persona2.nombre<<endl;
    cout<<"Edad 2: "<<persona2.edad<<endl;

    return 0;
}
