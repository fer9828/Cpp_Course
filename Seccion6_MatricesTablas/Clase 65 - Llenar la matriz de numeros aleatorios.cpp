/*  Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros aleatorios,
    copiar el contenido a otra matriz y por ultimo mostrarla en pantalla */ 

#include<iostream>
#include<stdlib.h> //aqui esta el generador de numeros aleatorios
#include<time.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas, aleatorio;
    int matriz2[100][100];

    //la formula para generar el numero aleatorio es:
    // variable = limite_inferior + rand()% (limite_superior +1 - limite inferior)
    srand(time(NULL)); //genera el numero
    

    cout<<"Digite el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>columnas;

    for (int i = 0; i < filas; i++){ //filas ----
        for (int j = 0; j < columnas; j++){ //columnas |||
            aleatorio = 1 + rand()%(100);
            numeros[i][j] = aleatorio;
        }
        
    }

    //Almacenando elementos en la matriz nueva

    for (int i = 0; i < filas; i++){ //filas ----
        for (int j = 0; j < columnas; j++){ //columnas |||
            matriz2[i][j] = numeros[i][j];
        }   
    }

    //Mostrando la matriz nueva
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<" "<<matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0; 
}