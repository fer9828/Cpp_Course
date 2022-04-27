/*La sentencia for

    for(expr1; expresion logica; expr2){
        conjunto de instrucciones;

    } 
*/

#include<iostream>

using namespace std;

int main(){
    int j;

    for(int i=1; i<=10; i++){
        cout<<i<<endl;
    }
    for(j=10; j>=1; j--){
        cout<<j<<endl;
    }

    return 0;
}