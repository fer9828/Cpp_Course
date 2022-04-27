/*  Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
    La matriz traspuesta es aquella en la que la columna i era la fila i de la
    matriz original */ 

    // En la matriz traspuesta se cambian las filas por las columnas 

#include<iostream>

using namespace std;

int main(){

    int matriz1[3][3];
    int traspuesta[3][3];

    //Almacenando elementos en la matriz -> Se utilizan bucles anidados

    for (int i = 0; i < 3; i++){ //filas ----
        for (int j = 0; j < 3; j++){ //columnas |||
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; // Se guarda por posicion 
            cin>>matriz1[i][j];
        }
        
    }
    //Mostrar la matriz original 
    cout<<"\nMostrando la Matriz Original: \n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matriz1[i][j];
        }
        cout<<"\n";
    }

    //Pasar a la traspuesta

    for (int i = 0; i < 3; i++){ //filas ----
        for (int j = 0; j < 3; j++){ //columnas |||
            traspuesta[j][i] = matriz1[i][j];
        }   
    }

    //Mostrar la matriz traspuesta 

    cout<<"\nMostrando la Matriz Traspuesta: \n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<traspuesta[i][j];
        }
        cout<<"\n";
    }

    return 0;
}