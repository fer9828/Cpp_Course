/* Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango 20 - 30 o el valor de 0.
El programa debe entregar la suma de los valores mayores a 0 introducidos. */ 

#include<iostream>

using namespace std;

int main(){
    int numero, sumaTotal = 0;

    do
    {
        cout<<"Digite un numero: "; cin>>numero;

        if(numero>0){
            sumaTotal += numero;
        }

    } while( ((numero <20)  || (numero > 30)) && (numero !=0));
    
    cout<<"\nLa Suma Total de los numeros es: "<<sumaTotal<<endl;


    return 0;
}