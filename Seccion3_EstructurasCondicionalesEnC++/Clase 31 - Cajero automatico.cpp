// Hacer un cojero automático

#include<iostream>

using namespace std;

int main(){
    int saldo_inicial= 1000, opc;
    float extra, saldo = 0, retiro;

    cout<<"\t Bienvenido a su Cajero Virtual\n";
    cout<<"1. Ingresar dinero de la cuenta\n";
    cout<<"2. Retirar dinero de la cuenta\n";
    cout<<"3. Salir\n";
    cout<<"Digite la opcion deseada: \n  ";
    cin>>opc;

    switch(opc){
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar: \n";
            cin>>extra;
            saldo = saldo_inicial + extra;
            cout<<"Dinero en cuenta: "<<saldo<<endl;break;
            

        case 2:
            cout<<"Digite la cantidad de dinero que va a retirar: ";
            cin>>retiro;

            if(retiro > saldo_inicial){
                cout<<"NO tiene esa cantidad de dinero\n"   ;
            }
            else{
                saldo = saldo_inicial - retiro;
                cout<<"Dinero en cuenta: \n"<<saldo<<endl;
            }

        case 3: break;
    }

    return 0;
}