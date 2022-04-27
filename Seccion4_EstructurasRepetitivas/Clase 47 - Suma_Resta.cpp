/* Hacer un programa que calcule el resultado de la expresion 1-2+3-4+5-6...n */ 

#include<iostream>

using namespace std;

int main(){

    int n,par, sumaPares = 0, sumaImpares = 0, sumaTotal;

    cout<<"Digite hasta que valor desea que se realice la operacion: ";cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){;
            par = i*-1;
            sumaPares += par;
        }
        else{
            sumaImpares += i;
        }

    sumaTotal = sumaPares + sumaImpares;
    }
    
    cout<<"\nEl valor de la operacion es "<<sumaTotal<<endl;


    return 0;
}