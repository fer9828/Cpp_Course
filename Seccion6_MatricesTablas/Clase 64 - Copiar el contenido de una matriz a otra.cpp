/*  Hacer una matriz de tipo entera de 2x2, llenarla de numeros
    y luego copiar todo su contenido hacia otra matriz */ 

#include<iostream>

using namespace std;

int main(){

    int matriz[2][2];
    int matriz2[2][2];

    //Almacenando elementos en la matriz -> Se utilizan bucles anidados

    for (int i = 0; i < 2; i++){ //filas ----
        for (int j = 0; j < 2; j++){ //columnas |||
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; // Se guarda por posicion 
            cin>>matriz[i][j];
        }
        
    }

    //Almacenando elementos en la matriz nueva

    for (int i = 0; i < 2; i++){ //filas ----
        for (int j = 0; j < 2; j++){ //columnas |||
            matriz2[i][j] = matriz[i][j];
        }   
    }

    //Mostrando la matriz nueva
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout<<matriz2[i][j];
        }
        cout<<"\n";
    }

    return 0;
}