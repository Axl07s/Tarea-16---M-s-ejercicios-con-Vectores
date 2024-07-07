// Autor: Axel Molineros
// Fecha: 2024-07-04
// Tema: Función de Búsqueda
// 1) Ejercicio en clase

#include<iostream>
using namespace std;

//Diseñe la funcion que determine si un entero existe dentro de un vector.
//Busca un elemento dentro del vector
//Devuelve true si lo encuentra, false si no

bool BuscaElementov1(int vector[], int total, int elemento)
{
    for(int k=0; k<total; k++)
    {
        if(vector[k]==elemento)
        return "existe";
    }
    return false;
}

//Busca un elemento en el vector//
//Devuelve la posicion donde este el elemento//
int BuscaElementov2(int vector[], int total, int elemento)
{
    for(int k=0; k<total; k++)
    {
        if(vector[k]==elemento)
        return k;
    }
    return -1;
}
main()
{
    const int MAX=10;
    int vector[MAX];
    //Inicializa uno a uno los elementos del vector//
    vector[0]=10; vector[1]=22; vector[2]=15;
    vector[3]=65; vector[4]=12; vector[5]=5;
    vector[6]=4; vector[7]=1; vector[8]=69;
    vector[9]=34;

    int x = 4; //Elemento a buscar//
    bool res = BuscaElementov1(vector, MAX, x);
    if( res )
    cout<<endl<<"El elemento "<< x << " Si existe";
    else
    cout<<endl<<"El elemento "<< x <<" No existe";

    x = 100;
    if(BuscaElementov1(vector, MAX, x))
     cout<<endl<<"El elemento "<< x << " Si existe";
    else

     cout<<endl<<"El elemento "<< x <<" No existe";

     x = 34;
     int pos = BuscaElementov2(vector, MAX, x);
     if( pos >=0)
     cout<<endl<<"Elemento "<<vector[pos]<<" encontrado en la posicion "<<pos;
     else
     cout<<endl<<"El elemento "<<x <<" no existe en el vector";
    return 0;
}