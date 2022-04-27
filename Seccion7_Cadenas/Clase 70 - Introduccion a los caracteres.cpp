// Cadenas de Caracteres 

#include<iostream>
#include<string.h> // Para cadenas de caracteres

using namespace std;

int main(){
    char palabra[] = "Fernando"; //Aqui se esta almacenando en el arreglo vacio  
    char palabra1[] = {'F','e','r','n','a','n','d','o'}; // Es lo mismo palabra a palabra2
    char nombre[30];

    cout<<palabra<<endl;
    cout<<palabra1<<endl;

    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n'); //Guarda en la variable nombre, solo 20 caracteres y cierra con un salto de linea

    cout<<nombre<<endl;
 
   
    return 0;
}