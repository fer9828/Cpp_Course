/* Determine si la edad de una persona esta entre el rango de 18-25*/

#include<iostream>

using namespace std; 

int main(){
    int a;
    cout<<"Digite su edad: ";
    cin>>a;

    if((a>=18) && (a<=25)){
        cout<<"\nSu edad se encuentra en el rango de edad entre 18 y 25 años\n";
    }

    else{
        cout<<"\nSu edad no se encuentra en el rango de edad entre 18 y 25\n";
    }

    return 0;
}