/*
    Escriba una funcion nombrada calc_anos() que tenga una parametro entero que represente el numero
    total de dias desde la fecha 1/1/2000 y parametros de referencias nombrado años, mes y día. La
    función es calcular el año, mes y día actual para el número dado de días que se le transmitan. 
    Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.
*/

#include<iostream>

using namespace std;

void calc_anos(int, int&, int&, int&); //Un paso de parametro por valor y 3 pasos por referencia

int main(){
    int totalDias,ano,mes,dia;

    cout<<"Digite la cantidad de días: ";
    cin>>totalDias;

    calc_anos(totalDias,ano,mes,dia);

    cout<<"Fecha actual: "<<dia+1<<"/"<<mes+1<<"/"<<ano+2000<<endl;

    return 0;
}

void calc_anos(int totalDias, int& ano, int& mes, int& dia){
    ano = totalDias/365;
    totalDias %= 365;
    mes = totalDias/30;
    dia %= 30;
}