// Comparar cadenas - Funcion strcmp()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra1[] = "yen";
    char palabra2[] = "hola";

    if (strcmp(palabra1,palabra2)==0) //Quiere decir que son iguales
    {
        cout<<"Ambas cadenas son iguales"<<endl;
    }
    /*else if (strcmp(palabra1,palabra2)!=0) //Quiere decir que son iguales
    {
        cout<<"Ambas cadenas son diferentes"<<endl;
    }
    */
    else if (strcmp(palabra1,palabra2)>0) //Quiere decir que son iguales
    {
        cout<<palabra1<<" esta despues alfabeticamente"<<endl;
    }
    
    



    return 0;
}