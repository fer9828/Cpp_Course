/*Escriba un programa que calcule el valor de: 1! + 2! + 3! + ...n! */ 

#include<iostream>

using namespace std;

int main(){
    int n,multiplicacion=1, conteo = 0;

    cout<<"Digite el numero: ";cin>>n;

    for (int i = 1; i <= n; i++)
    {
        multiplicacion *= i;

        conteo += multiplicacion; 
    }
    
    cout<<"\nLa suma de factoriales es: "<<conteo<<endl;

    return 0;
}