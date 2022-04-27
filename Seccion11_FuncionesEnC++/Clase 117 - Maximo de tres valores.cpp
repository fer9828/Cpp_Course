/*
    Escriba una plantilla de función llamada maximo() que devuelva el valor maximo de tres
    argumentos que se transmitan a la funcion cuando sea llamada. Suponga que los tres argumentos
    seran del mismo tipo de datos.
*/ 

#include<iostream>

using namespace std;

//Prototipo de Funcion (Ojo con la plantilla de Funcion)

template <class T>
T maximo(T dato1, T dato2, T dato3);

int main(){
    int dato1 = 4, dato2 = 6, dato3 = 8;

    cout<<"El maximo valor es: "<<maximo(dato1,dato2,dato3)<<endl;


    return 0;
}

template <class T>
T maximo(T dato1, T dato2, T dato3){ 
    T max; 

    if((dato1>=dato2) && (dato1 >= dato3)){
        max = dato1;
    }
    else if ((dato2>=dato1) && (dato2 >= dato3)){
        max = dato2;
    }
    else{
        max = dato3;
    }
    return max;
}