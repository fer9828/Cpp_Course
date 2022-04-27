/* Determinar si el numero digitado es positivo o Negativo*/

#include<iostream>

using namespace std;

int main(){
    float a;
    cout<<"Digite un numero para comprobar si es positivo o negativo: ";
    cin>>a;

    if(a==0){
        cout<<"El cero no es positivo ni negativo. Es considerado un numero neutro\n";
    }
    else if(a<0){
        cout<<"El numero es negativo\n";
    }
    else{
        cout<<"El numero es positivo\n";
    }

    return 0;
}