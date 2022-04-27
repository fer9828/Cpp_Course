// Metodo Burbuja 

/*
    Es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento de la lista
    que va a ser ordenada con el siguiente, intercambiandolos de posicion si estan en orden
    equivocado. Es necesario revisar varias veces toda la lista hasta que no se necesiten más
    intercambios, lo cual significa que la lista está ordenad
*/ 

#include<iostream>

using namespace std;

int main(){
    int numeros[] = {4,1,2,3,5};
    int aux;

    //Algoritmo del metodo burbuja

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (numeros[j] > numeros[j+1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
            
        }
        
    }

    cout<<"Orden acsendente: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<numeros[i]<<" ";
    }
    
    cout<<"\nOrden Descendente: ";
    for (int i = 4; i >= 0; i--)
    {
        cout<<numeros[i]<<" ";
    }

    cout<<endl;
    
    return 0;
}