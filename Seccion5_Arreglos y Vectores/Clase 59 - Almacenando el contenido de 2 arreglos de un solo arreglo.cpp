/*  Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectores
    en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del
    segundo vector. Muestre el contenido del nuevo vector en la salida estandar */ 

#include<iostream>

using namespace std;

int main(){

    char caracteres1[5] = {'a','e','i','o','u'};
    char caracteres2[5] = {'b','c','d','f','g'};
    char caracteres3[10];

    //Copiando los elementos de caracteres 1 hacia caracteres 3

    for (int i = 0; i < 5; i++)
    {
        caracteres3[i] = caracteres1[i];
    }
    
    //Copiando los elementos de caracteres 2 a caracteres 3

    for (int i = 5; i < 10; i++)
    {
        caracteres3[i] = caracteres2[i-5];
    }
    
    //Mostrar el nuevo vector

    for (int i = 0; i < 10; i++)
    {
        cout<<i + 1<<". "<<caracteres3[i]<<endl;
    }
    
    

    return 0;
}