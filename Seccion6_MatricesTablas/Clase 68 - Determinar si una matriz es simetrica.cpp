/*  Desarrolle progrsms que determine si una matriz es simetrica o no. Una matriz es simetrica si
    es cuadrada y si es igual a su matriz transpuesta */ 

#include<iostream>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas;
    int transpuesta[100][100];

    cout<<"Digite el numero de filas: ";cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>columnas;
    char band = 'F'; 

    if (filas == columnas)
    {
        cout<<"\nRellenando los valores de la matriz: \n";
        for (int i = 0; i < filas; i++){ //filas ----
            for (int j = 0; j < columnas; j++){ //columnas |||
                cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; // Se guarda por posicion 
                cin>>numeros[i][j];
            }
        }
        //Mostrar la matriz introducida 
         cout<<"\nMostrando la Matriz introducida: \n";
            for (int i = 0; i < filas; i++){
                for (int j = 0; j < columnas; j++){
                cout<<numeros[i][j];
            }
            cout<<"\n";
        }

        //Determinar si la matriz es igual a la matriz transpuesta

        //Pasar a la traspuesta

        for (int i = 0; i < filas; i++){ //filas ----
            for (int j = 0; j < columnas; j++){ //columnas |||
                transpuesta[j][i] = numeros[i][j];
                }
            }   
    

        //Mostrar la matriz traspuesta 

        cout<<"\nMostrando la Matriz Traspuesta: \n";

        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                cout<<transpuesta[i][j];
            }
            cout<<"\n";
        }


        // Verificar si son simetricas

        for (int i = 0; i < filas; i++){ //filas ----
            for (int j = 0; j < columnas; j++){ //columnas |||
                if (transpuesta[i][j] == numeros[i][j])
                {
                    band = 'V'; //La bandera cambia de valor a veradera y asi la saco del loop
                }
                }
            }

        if (band == 'V')
        {
            cout<<"La matriz es simetrica"<<endl;
        }
        
        else{
            cout<<"La matriz no es simetrica"<<endl;
    }

    }
        else{
            cout<<"La matriz no es simetrica"<<endl;
    }


    return 0; 
}