// Transformar una cadena a numeros  - Funcion atoi() y atof()

// "123" --> atoi() --> 123

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){

    char cad1[] = "123";
    int numero1;
    char cad2[] = "123.456";
    float numero2;

    numero1 = atoi(cad1);
    numero2 = atof(cad2);

    cout<<numero1<<endl;
    cout<<numero2<<endl;


    return 0;
}