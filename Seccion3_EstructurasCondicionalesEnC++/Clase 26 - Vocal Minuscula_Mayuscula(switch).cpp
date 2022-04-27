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
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':cout<<"Es una vocal Mayuscula\n"; break;
        default: cout<<"No es una vocal\n"; break;
    }

    return 0;
}