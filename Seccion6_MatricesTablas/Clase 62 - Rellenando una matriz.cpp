/*  Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas.
    Posteriormente mostrar la matriz en pantalla */ 

#include<iostream>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas;

    cout<<"Digite el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>columnas;

    //Almacenando elementos en la matriz -> Se utilizan bucles anidados

    for (int i = 0; i < filas; i++){ //filas ----
        for (int j = 0; j < columnas; j++){ //columnas |||
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; // Se guarda por posicion 
            cin>>numeros[i][j];
        }
        
    }
    
    //Mostrando la matriz
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }
    


    return 0;
}