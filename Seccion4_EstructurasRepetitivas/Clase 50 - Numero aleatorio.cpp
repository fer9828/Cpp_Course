/*  Realice un programa que solicite al usuario que piense un numero entero del 1-100.
    El programa debe generar un numero aleatorio en ese mismo rango [1 - 100], y debe
    indicarle al usuario si el numero que digitó es menor o mayor al numero aleatorio,
    así hasta que lo adivine. Por ultimo debe mostrar el numero de intentos que le llevó */ 

#include<iostream>
#include<stdlib.h> //aqui esta el generador de numeros aleatorios
#include<time.h>

using namespace std;

int main(){
    int numero, aleatorio, conteo = 0;

    //Primero se desea generar el numero aleatorio.

    srand(time(NULL)); //genera el numero

    //la formula para generar el numero aleatorio es:
    // variable = limite_inferior + rand()% (limite_superior +1 - limite inferior)

    aleatorio = 1 + rand()%(100);

    do{
        cout<<"Digite un numero: "; cin>>numero;

        if(numero>aleatorio){
            cout<<"\nDigite un numero menor\n";
        }
        if(numero<aleatorio){
            cout<<"\nDigite un numero mayor\n";
        }
        conteo++;
    }while(numero!=aleatorio);

    cout<<"\nFelicidades adivinaste el numero\n";
    cout<<"\nNumero de intentos: "<<conteo<<endl;


    return 0;
}