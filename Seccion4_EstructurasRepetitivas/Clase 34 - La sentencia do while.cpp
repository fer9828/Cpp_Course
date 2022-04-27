/* La sentencia do while

    do{  #Aqui el do primero actua y luego piensa 
        conjunto de instrucciones;
    
    }while(expresión lógica);
*/ 

 
#include<iostream>

#include<stdlib.h>

using namespace std;

int main(){

    int i;

    i=1;

    do{
            cout<<i<<endl;
            i++; //aumenta de uno en uno 
    }while (i<=10);
    
    system("pause");
    return 0;
}