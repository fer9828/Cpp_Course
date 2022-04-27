// Escriba un programa que lea de la entrada estandar dos catetos de un triangulo rectangulo y escriba en su salida su hipotenusa

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float cateto1, cateto2, hipotenusa = 0;
	
	cout<<"Digite el valor del cateto #1: "; cin>>cateto1; 
	cout<<"Digite el valor del cateto #2: "; cin>>cateto2;
	
	/* Forma old school
	
	cateto1 = (cateto1*cateto1);
	cateto2 = (cateto2*cateto2);
	
	hipotenusa = sqrt(cateto1+cateto2);
	
	*/
	
	// Forma nueva
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout << "\nEl valor de la hipotenusa es: " << hipotenusa <<endl;
	
	
	return 0;
}
