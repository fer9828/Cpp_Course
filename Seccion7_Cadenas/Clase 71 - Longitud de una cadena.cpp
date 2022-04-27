//Longitd de una cadena de caracteres - Funcion strlen()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "hola";
    int longitud = 0;

    longitud = strlen(palabra); //Devuelve la cantitdad de elementos

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl; 

    return 0;
}