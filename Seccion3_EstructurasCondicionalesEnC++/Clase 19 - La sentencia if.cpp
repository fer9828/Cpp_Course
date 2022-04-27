/* La sentencia if 

    if (condicion){

        Instrucciones 1;

    }
    else{
        Instrucciones 2

    }

*/

#include<iostream>

using namespace std;

int main(){

    int numero, dato = 5;

    cout<<"Digite un numero: ";
    cin>>numero;

    if(numero > dato){
        cout<<"El numero es mayor que 5\n";
    }
    else{
        cout<<"El numero es menor que 5\n";
    }
    

    return 0;
}