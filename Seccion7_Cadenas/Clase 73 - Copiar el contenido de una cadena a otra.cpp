// Copiar el contenido de una cadena a otra - Funcion strcpy()

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char nombre[] = "Alejandro";
    char nombre2[20];

    strcpy(nombre2,nombre); //Varaible vacia, Variable con contenido 

    cout<<nombre2<<endl;  
    
    return 0;
}