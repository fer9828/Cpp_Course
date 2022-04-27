// Escribir la expresion de [(a/b)+1) en C++

#include<iostream>

using namespace std;

int main(){
	
	float a,b, resultado = 0; //resultado va =0 porque va a almacenar un valor al final del programa, entonces se inicializa en 0
	
	cout<<"Digite el valor de a: "; cin >>a;
	cout<<"Digite el valor de b: "; cin >>b;
	
	resultado = (a/b)+1;
	
	cout.precision(2);
	cout<<"\nEl valor de la expresion es "<<resultado<<endl;
	
	return 0;
}
