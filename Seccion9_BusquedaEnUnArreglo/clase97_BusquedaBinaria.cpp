//Busqueda Binaria

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int inferior,superior,mitad,dato;
    char band = 'F';

    dato = 4;

    //Algoritmo de la Bsuqueda Binaria
    inferior = 0;
    superior = 5;

    while (inferior <= superior)
    {
        mitad = (inferior+superior)/2;

        if (numeros[mitad] == dato)
        {
            band = 'V';
            break;
        }
        
        if (numeros[mitad] > dato)
        {
            superior = mitad;
            mitad = (inferior + superior)/2;
        }
        
        if (numeros[mitad] < dato)
        {
            inferior = mitad;
            mitad = (inferior + superior)/2;
        }
    }

    if (band == 'V')
    {
        cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;     
    }
    else{
        cout<<"El numero no ha sido encontrado"<<endl;
    }
    

    return 0;
}