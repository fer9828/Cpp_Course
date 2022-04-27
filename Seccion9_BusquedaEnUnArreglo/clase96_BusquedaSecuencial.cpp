//Busqueda Secuencial

// a[5] = {3,4,5,1,2}, data = 4;

#include<iostream>
using namespace std;


int main(){
    int a[] =  {3,4,5,1,2};
    int i, dato;
    char band = 'F';

    dato = 4;

    //Busqueda Secuencial

    i = 0;
    while ((band == 'F') && (i < 5))
    {
        if (a[i] == dato)
        {
            band = 'V';
        }
        i++;
    }
    
    if (band == 'F')
    {
        cout<<"El numero a buscar no existe en el arreglo"<<endl;
    }
    else if (band = 'V')
    {
        cout<<"El dato ha sido encontrado en la posicion: "<<i-1<<endl;
    }
    



    return 0;
}