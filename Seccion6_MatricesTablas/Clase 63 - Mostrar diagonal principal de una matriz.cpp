/*  Realice un programa que defina una matriza de 3x3 y escriba un ciclo
    para que muestre la diagonal principal de la matriz */ 

#include<iostream>

using namespace std;

int main(){

    int matriz[3][3];

    //Almacenando elementos en la matriz -> Se utilizan bucles anidados

    for (int i = 0; i < 3; i++){ //filas ----
        for (int j = 0; j < 3; j++){ //columnas |||
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; // Se guarda por posicion 
            cin>>matriz[i][j];
        }
        
    }

    cout<<"\nMostrando la matriz completa: \n";//Mostrando la matriz completa
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }

    cout<<"\nMostrando la diagonal principal: \n";//Mostrar la diagonal principal 
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if ( i == j )
            {
                cout<<matriz[i][j]<<endl;
            }
        }
    }

    /*cout<<"La diagonal de la matriz es: "<<endl; 
    cout<<matriz[0][0]<<endl;
    cout<<" "<<matriz[1][1]<<endl;
    cout<<"  "<<matriz[2][2]<<endl;
    */ 
    return 0;
}