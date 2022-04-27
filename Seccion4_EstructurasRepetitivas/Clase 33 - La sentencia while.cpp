/* La sentencia while:

    while (expresion logica)[
        conjunto de instrucciones;


    ]

*/

#include<iostream>

//#include<conio.h> //Esta libreria se utiliza para que el programa no se cierre

using namespace std;

int main(){
    int i, j;

    i=1;
    j=10;

    while(i<=10){
        cout<<i<<endl;

        i++; //Aqui esta sumandose de uno en uno  
    }

    while(j>=1){
        cout<<j<<endl;
        j--; //Aqui va restandose de uno en uno
    }

    //getch();
    return 0;
}