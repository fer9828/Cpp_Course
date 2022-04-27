/* Determinar si es mayuscula o minuscula*/

#include<iostream>

using namespace std;

int main(){
    char a;
    cout<<"\nDigite un caracter: ";
    cin>>a;

    switch(a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':cout<<"Es una vocal minuscula\n"; break;
        default: cout<<"No es una vocal minuscula\n"; break;
    }

    return 0;
}