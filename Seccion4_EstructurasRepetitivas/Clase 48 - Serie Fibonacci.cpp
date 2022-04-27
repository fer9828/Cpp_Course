/* Hacer un programa que realice la serie fibonacci -> 1 1 2 3 5 8 13 ...n*/ 

#include<iostream>

using namespace std; 

int main(){

    int n, x = 0, y = 1, z = 1;

    cout<<"Digite hasta que valor desea realizar la sere fibonacci: "; cin>>n;

    cout<<"1 ";
    for (int i = 1; i <= n; i++)
    {
        z = x + y;
        cout<<z<<" "; //Aqui imprime el 1
        x = y;
        y = z;
    }

    cout<<"\n";

    return 0;
}