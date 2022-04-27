/* Determinar si el cuarto numero coincide con todos los numeros */
#include<iostream>

using namespace std; 

int main(){
    int a,b,c,d;
    cout<<"\nIntroduzca 3 numeros: ";
    cin>>a>>b>>c;

    cout<<"\nDigite un cuarto numero\n";
    cin>>d;

    
    if((a==d) || (b==d) || (c==d)){
        cout<<"\nAl menos uno de los primeros numeros coinciden con el cuarto numero\n";
    }

/*
    if(a==d){
        cout<<"\nEl primer numero y el ultimo coinciden\n";
    }
    else if(b==d){
        cout<<"\nEl segundo numero y el ultimo coinciden\n";
    }
    else if(c==d){
        cout<<"\nEl tercer numero y el ultimo coinciden\n";
    }

    
*/
    else{
        cout<<"\n No existen coincidencias entre los numeros\n";
    }
    return 0;
}