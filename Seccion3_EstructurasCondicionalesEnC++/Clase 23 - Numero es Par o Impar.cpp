/* Determinar si un numero entero es par o impar*/

#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Digite un numero entero: ";
    cin>>a;

    if(a==0){
        cout<<"El numero es 0\n";
    }

    else if(a%2==0){
        cout<<"El numero es par\n";
    }
    else{
        cout<<"El numero es impar\n";
    }

    return 0;

}