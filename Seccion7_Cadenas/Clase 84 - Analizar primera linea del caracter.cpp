#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char palabra1[30];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(palabra1,30,'\n');

    if (strncmp(palabra1,"A", 1)==0)
    {
        cout<<"El nombre empieza con la letra A"<<endl;
    }
    else{
        cout<<"El nombre no empieza con la letra A"<<endl;
    }
    


    return 0;
}