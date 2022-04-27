/*  Realice un programa que calcule el prodcuto de dos matrices cuadradas 3x3 */ 

#include<iostream>

using namespace std;

int main(){


    //Multiplicar las matrices 3x3
    int matriz1[3][3] = {{1,2,1} , {2,1,1} , {2,1,2}};
    int matriz2[3][3] = {{3,2,1} , {2,3,1} , {1,1,3}};
    int C[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            C[i][j] = 0;
            for (int k = 0; k < 3; k++){
                C[i][j] = C[i][j] + matriz1[i][k]*matriz2[k][j];
            }
        }   
    }
    
//Mostrar la matriz introducida 
    cout<<"\nMostrando el resultado de la multiplicacion: \n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<" "<<C[i][j]<<" ";
        }
        cout<<"\n";
    }




    return 0;
}