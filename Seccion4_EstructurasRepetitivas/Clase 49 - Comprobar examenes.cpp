/* En una clase de 5 alumnos se han realizado 3 examenes y se requiere determinar el numero de:
    a) Alumnos que aprobaron todos los examenes
    b) Alumnos que aprobaron al menos un examen
    c) Alumnos que aprobaron unicamente el ultimo examen
Realice un programa que permita la lectura de los datos y el calculo de las estadisticas */ 

#include<iostream>

using namespace std;

int main(){

    float examen1, examen2, examen3;
    int aprobadosTodos=0,aprobadosAlguno=0,aprobadosFinal=0;

    for (int i = 1; i <= 5; i++){
        cout<<i<<". Digite la nota del primer examen: ";cin>>examen1;
        cout<<i<<". Digite la nota del segundo examen: ";cin>>examen2;
        cout<<i<<". Digite la nota del tercer examen: ";cin>>examen3;
        cout<<"\n";

        if ((examen1>70)&&(examen2>70)&&(examen3>70)) //&& y que
        {
            aprobadosTodos++; //si las 3 condiciones se cumplen entonces se suma al contador
        }
        if ((examen1>70)||(examen2>70)||(examen3>70)) // || o si no
        {
            aprobadosAlguno++;
        }
         if ((examen1<70)&&(examen2<70)&&(examen3>70)) //&& y que
        {
            aprobadosFinal++; 
        }
    }
    
    cout<<"\nCantidad de alumnos que aprobaron todos los examenes: "<<aprobadosTodos<<endl;
    cout<<"\nCantidad de alumnos que aprobaron al menos un examen: "<<aprobadosAlguno<<endl;
    cout<<"\nCantidad de alumnos que aprobaron unicamente el ultimo examen: "<<aprobadosFinal<<endl;

    return 0;   
}