//Ordenamiento Quicksort

#include<iostream>

using namespace std;

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void quickSort(float a[], int primero, int ultimo){
    int i,j,central;
    float pivote;

    central = (primero+ultimo) / 2;
    pivote = a[central];
    i = primero; 
    j = ultimo;

    do
    {
        while (a[i] < pivote ) i++;
        while (a[j] > pivote ) j--;
        
        if (i <= j)
        {
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
        
    } while (i<=j);
    
    if (primero < j)
    {
        quickSort(a,primero,j); //Orden de la Sublista izq
    }

    if (i < ultimo)
    {
        quickSort(a,i,ultimo); // Orden de la Sublista Derecha
    }
    
    

}

int main(){
    float arreglo[] = {4,6,1,9,5,10,2,11,19,7};

    quickSort(arreglo,0,9);

    cout<<"Arreglo Ordenado - Forma Ascendente:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arreglo[i]<<"|";
    }

    cout<<endl;

    cout<<"Arreglo Ordenado - Forma Descendente:"<<endl;
    for (int i = 9; i > 0; i--)
    {
        cout<<arreglo[i]<<"|";
    }
    
    cout<<endl;

    return 0;



    return 0;
}