#include<iostream>

using namespace std;

int main(){
    float a,b,c;

    cout<<"Digite tres numeros para determinar cual es mayor: ";
    cin>>a>>b>>c;

    if ((a>=b) && (a>=c)){
        cout<<"El mayor es: "<<a<<endl;
    }
    else if ((b>=a) && (b>=c)){
        cout<<"El mayor es: "<<b<<endl;
    }
    else{
        cout<<"El mayor es: "<<c<<endl;
    }

    return 0;
}