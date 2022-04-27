/* 
    Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor
    que se le transmite y despliegue el resultado. La función deberá ser capaz
    de elevar al cuadrado números flotantes
*/ 

#include<iostream>
#include<math.h>

using namespace std;

//Prototipo de Funcion (Ojo con la plantilla de Funcion)

void pedirDatos();

template <class TIPOD>
void al_cuadrado(TIPOD num1);

float num1;

int main(){
    pedirDatos();
    al_cuadrado(num1);

    return 0;
}

void pedirDatos(){
    cout<<"Digite 1 numero: ";
    cin>>num1;
}

template <class TIPOD>
void al_cuadrado(TIPOD num1){

    TIPOD elevacion = pow(num1, 2);

    cout<<"El cuadrado del numero es: "<<elevacion<<endl;


}
