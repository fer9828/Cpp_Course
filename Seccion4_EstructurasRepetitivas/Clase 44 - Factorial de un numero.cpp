/*Escriba un programa que calcule el factorial de un numero 1*2*3*4*...n*/ 

#include<iostream>

using namespace std;

int main(){
    int n,multiplicacion=1;

    cout<<"Digite el numero: ";cin>>n;

    for (int i = 1; i <= n; i++)
    {
        multiplicacion = multiplicacion*i;
    }
    
    cout<<"\nEl factorial del numero "<<n<<" es: "<<multiplicacion<<endl;

    return 0;
}