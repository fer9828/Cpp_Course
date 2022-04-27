// Ordenacion Shell

/*
    La ordenacion Shell debe el nombre a su inventor Donal L. Shell. Se suele denominar también
    "Ordenacion por insercion con incrementros decrecientes". Se considera que es una mejora del
    método de inserción directa.

    En el algoritmo de inserción, cada elemento se compara con los elementos contiguos de su izquierda,
    uno tras otro. Si el elemento a insertar es el más pequeño hay que realizar muchas comparaciones 
    antes de colocarlo en su lugar definitivo. El algoritmo de Shell modifica los saltos contiguos por
    saltos de mayor tamaño y con ello consigue que la ordenación sea más rápida. Generalmente, se toma
    como salto incial n/2 (siendo n el número de elementos), luego en cada iteración se reduce el salto
    a la mitad, hasta que el salto es de tamaño 1.

    Los pasos a seguir por el algoritmo para una lista de n elementos:

        1. Se divide la lista original en n/2 grupos de dos, cosinderando un incremento o salto entre los
        elementos de n/2
        2. Se clasifica cada grupo por separado, comparando las parejas de elementos y si no están ordenados
        se intercambian
        3. Se divide ahora la lista en la mitad de grupos (n/4), con un salto entre los elementos también 
        mitad (n/4), y nuevamente se clasifica cada grupo por separado.
        4. Así sucesivamente, se sigue dividiendo la lista en la mitad de grupos que en el recorrido anterior 
        con un salto decreciente en la mitad que el salto anterior, y luego clasificando cada grupo por separado
        5. El algoritmo termina cuando el tamaño del salto es 1


*/

#include <iostream>

using namespace std;

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void ordenacionShell(float a[], int n){

    int salto, i , j , k;
    salto = n/2;

    while (salto>0)
    {
        for (i = salto; i < n; i++)
        {
            j = i - salto;
            while (j>=0)
            {
                k = j + salto;
                if (a[j] <= a[k]) //Par de elementos estan ordenados
                {
                    j = -1;
                }
                else{ //Par de elementos estan desordenados
                    intercambio(a[j], a[k]);
                    j -= salto;

                }
                
            }
            
        }
        salto = salto/2;
        
    } 
}


int main(){
    float arreglo[] = {4,6,1,9,5,10,2,11,19,7};

    ordenacionShell(arreglo,10);

    cout<<"Arreglo Ordenado - Forma Ascendente:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arreglo[i]<<"|";
    }

    cout<<endl;

    cout<<"Arreglo Ordenado - Forma Descendente:"<<endl;
    for (int i = 9; i > 0; i--)
    {
        cout<<arreglo[i]<<"|";
    }
    
    cout<<endl;

    return 0;
}
