/* La calificacion de un alumno es el promedio de tres notas:
	- La nota de practicas que cuenta un 30% del total
	- La nota teorica que cuenta un 60%
	- La nota de participacion que cuenta el 10% restante
	
	Escriba un programa que lea las tres notas del alumno y escriba su nota final */ 
	
#include<iostream>

using namespace std;

int main(){
	
	float a,b,c, resultado = 0;
	
	cout<<"Digite el porcentaje de la nota obtenida por el alumno en las practicas: "; cin>>a;
	cout<<"Digite el porcentaje de la nota obtenida por el alumno en la teoria: "; cin>>b;
	cout<<"Digite el porcentaje de la nota obtenida por el alumno en participacion: "; cin>>c;
	
	a = a*0.30;
	b = b*0.60;
	c = c*0.10;
	
	resultado = a+b+c;
	
	cout<<"\nEl alumno obtuvo un total de: "<<resultado<<endl;
	
	return 0;
}
