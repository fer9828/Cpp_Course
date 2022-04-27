/*  Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo
    multiplicados por 2 y muestre el segundo arreglo */ 

#include<iostream>

using namespace std;

int main(){

    int numeros1[5], n;
    int numeros2[5];

    cout<<"Digite el numero de elementos que va a tener el vector: "; cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>numeros1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        numeros2[i] = numeros1[i] * 2;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<numeros2[i]<<endl;
    }
    

    return 0;
}