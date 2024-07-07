//Autor: Axel Molineros
//Fecha: 2024-07-04

// 2) Función que invierte los elementos de un vector (realizado en clases).

#include <iostream>
using namespace std;

//Funcion que invierte el orden de los elementos de un vector
void InvierteVector ( int vec[], int total){
    int i = 0; //Indice inicial
    int k = total - 1; //Indice final

   if ( total > 1 ){
        do {
            //Intercambia las posiciones de los elementos
            int aux = vec[i];
            vec[i] = vec[k];
            vec[k] = aux;
            //Mueve los indice hacia el centro
            i++;
            k--;
        } while (i < k );
   }
}
//Funcion que imprime los elementos del vector
void ImprimeVector (const int vec[], int total){
    for (int i = 0; i < total; i++){
        cout<< vec[i] << " ";
    }
    cout<<endl;
}

int main(){
    int const MAX = 10; 
    int vector[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //Imprimir el vector original
    cout<<endl<<"Vector original: ";
    ImprimeVector(vector, MAX);

    // Invertir el vector
    InvierteVector(vector, MAX);

    //Imprime el vector invertido
    cout<<endl<<"Vector invertido: ";
    ImprimeVector(vector, MAX);

 return 0; 

}