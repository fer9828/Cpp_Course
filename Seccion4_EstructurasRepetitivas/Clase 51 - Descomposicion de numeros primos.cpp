/* Realice un programa que calcule la descomposicion en factores primos de un numero entero
   Ejemplo: 20 = 2*2*5 
   20/2
   10/2
   5/5
   1
*/ 

#include<iostream> 

using namespace std;

int main(){

    int n;

    cout<<"Digite el numero que desea descomponer: "; cin>>n;

    for(int i=2; n>1; i++){
        while(n%i==0){
            cout<<i<<" ";
            n /= i;
        }
    }

    return 0;
}