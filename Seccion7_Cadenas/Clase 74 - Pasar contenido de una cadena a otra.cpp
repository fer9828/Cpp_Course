/*  Pedir al usuario una cadena de caracteres, almacenarala en un arreglo y copiar todo su
    contenido hacia otro arreglo de caracteres */ 

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char usuario[100], usuario2[100];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(usuario,100,'\n');

    strcpy(usuario2,usuario);

    cout<<usuario2<<endl;





    return 0;
}