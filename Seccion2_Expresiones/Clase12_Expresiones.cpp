//Escribir la expresion a+(b/c-d)

#include<iostream>

using namespace std;

int main(){
	
	float a,b,c,d, resultado = 0;
	
	cout<<"Digite un valor de a: "; cin >> a;
	cout<<"Digite un valor de b: "; cin >> b;
	cout<<"Digite un valor de c: "; cin >> c;
	cout<<"Digite un valor de d: "; cin >> d;

	
	resultado = (a)+(b/(c-d));

	cout<<"La respuesta es: "<<resultado<<endl;
	
	
	return 0;
}
