/* Realice un programa que calcule la suma de dos matrices cuadradas de 3x3 */ 

#include<iostream>

using namespace std;

int main(){

    int matriz1[3][3];
    int matriz2[3][3];
    int suma[3][3];

    //Almacenando elementos en la matriz1 -> Se utilizan bucles anidados

    cout<<"\nDigite los valores de la matriz 1: \n";

    for (int i = 0; i < 3; i++){ //filas ----
        for (int j = 0; j < 3; j++){ //columnas |||
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; // Se guarda por posicion 
            cin>>matriz1[i][j];
        }
        
    }

    //Almacenando elementos en la matriz2 -> Se utilizan bucles anidados

    cout<<"\nDigite los valores de la matriz 2: \n";

    for (int i = 0; i < 3; i++){ //filas ----
        for (int j = 0; j < 3; j++){ //columnas |||
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; // Se guarda por posicion 
            cin>>matriz2[i][j];
        }
        
    }


    //Suma de matrices 

    for (int i = 0; i < 3; i++){ //filas ----
        for (int j = 0; j < 3; j++){ //columnas |||
            suma[i][j] = matriz1[i][j] + matriz2[i][j] ;
        }
        
    }

    //Mostrar la suma de matrices

    cout<<"\nMostrando la Suma de Matrices: \n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<" "<<suma[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}