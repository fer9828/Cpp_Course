/* Determinar si el cuarto numero coincide con todos los numeros */
#include<iostream>

using namespace std; 

int main(){
    int a,b,c,d;
    cout<<"\nIntroduzca 4 numeros: ";
    cin>>a>>b>>c>>d;

    if(a==d){
        cout<<"\nEl primer numero y el ultimo coinciden\n";
    }
    else if(b==d){
        cout<<"\nEl segundo numero y el ultimo coinciden\n";
    }
    if(c==d){
        cout<<"\nEl tercer numero y el ultimo coinciden\n";
    }
    else{
        cout<<"\n No existen coincidencias entre los numeros\n";
    }

    return 0;
}