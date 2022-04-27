/*Escriba un programa que calcule el valor de 2^1 + 2^2 + 2^3 + ... + 2^n */ 

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n,suma = 0, elevacion = 0;

    cout<<"Digite el valor de n por el cual desea elevar el numero: ";cin>>n;

    for (int i = 1; i <= n; i++)
    {
        elevacion = pow(2,i);

        suma += elevacion;
    }
    
    cout<<"\nLa suma de los numeros es igual a: "<<suma<<endl;

    return 0;
}