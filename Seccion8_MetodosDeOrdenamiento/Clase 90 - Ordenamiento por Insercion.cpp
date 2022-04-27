//Ordenamiento por Insercion

/*
    Es una manera muy natural de ordenar para un ser humano, y puede usarse 
    facilmente para ordenar un mazo de cartas numeradas en forma arbitraria.
    Requiere O(n^2) operaciones para ordenar una lista de n elementos
*/ 

#include<iostream>

using namespace std;

int main(){

    int numeros[] = {4,2,5,1,3};
    int i,pos,aux;

    //Algoritmo del Ordenamiento por Insercion

    for (int i = 0; i < 5; i++)
    {
        pos = i;
        aux = numeros[i];

        while ((pos > 0) && (numeros[pos -1] > aux))
        {
            numeros[pos] = numeros [pos - 1];
            pos--;
        }
        numeros[pos] = aux;
    }
    
    cout<<"Orden Ascendente: ";
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