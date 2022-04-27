// Menu Calcular propiedades de los numeros

#include<iostream>
#include<math.h>


using namespace std;

int main(){
    int opc,numero;
    float cubo;

    cout<<"\t Bienvenido/a al menu principal\n";
    cout<<"1. Calcular el cubo de un numero\n";
    cout<<"2. Determinar si un numero es par o impar\n";
    cout<<"3. Salir\n";
    cout<<"Digite la opción deseada\n";
    cin>>opc;

    switch(opc){
        case 1:
            cout<<"Digite el numero que desea elevar al cubo: "<<endl;
            cin>>cubo;
            cubo = pow(cubo,3);
            cout<<"El numero es igual a: "<<cubo<<endl;break;

        case 2:
            cout<<"Ingrese el numero que desea determinar si es par o impar: "<<endl;
            cin>>numero;
            if(numero==0){
                cout<<"El numero es 0\n";
            }

            else if(numero%2==0){
                cout<<"El numero es par\n";
            }
            else{
                cout<<"El numero es impar\n";
            }
        case 3: break;
    }

    return 0;
}