//Escriba un programa que lea la nota de 3 examenes de un alumno y logre sacar un promedio de las notas

#include<iostream>

using namespace std;

int main (){
	
	float a,b,c, resultado = 0;
	
	cout<<"Digite la primera nota estudiante: "; cin >> a;
	cout<<"Digite la segunda nota estudiante: "; cin >> b;
	cout<<"Digite la tercera nota estudiante: "; cin >> c;
	
	resultado = (a+b+c)/3;
	
	cout<<"\nEl promedio de las notas es: "<<resultado<<endl;
	
	return 0;
}

