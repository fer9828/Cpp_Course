/* Escriba un programa que calcule el valor de : 1 + 3 + 5 + ... +2n-1 */ 

#include<iostream>

using namespace std; 

/*int main(){

    int n, suma = 0;

    cout<<"Digite el numero de elementos: "; cin>>n;

    for(int i=1;i<=2*n-1;i++){

        if (i%2!=0)
        {
            suma += i;
        }
    }

    cout<<"\nEl resultado de la suma es: "<<suma<<endl;

    return 0;
}
*/
// Otra forma

int main(){

    int n, suma = 0;

    cout<<"Digite el numero de elementos: "; cin>>n;

    for(int i=1;i<=2*n-1;i+=2){
            suma += i;
    }

    cout<<"\nEl resultado de la suma es: "<<suma<<endl;

    return 0;
}