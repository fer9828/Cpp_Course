// Clase 18. Escribir las soluciones de una función de una ecuacion de segundo grado ax^2 + bx  + c = 0. 

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float a,b,c, resultado1 = 0, resultado2 = 0;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	resultado1 = (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	resultado2 = (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	
	cout<< "\nEl valor de x1 es: "<<resultado1<<endl;
	cout<< "\nEl valor de x2 es: "<<resultado2<<endl;

	return 0;
}
