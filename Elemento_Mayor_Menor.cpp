// Autor: Axel Molineros
// Fecha: 05/07/2024
// 4) Diseñe la función que encuentra el elemento mayor de un vector de enteros.
// 5) Diseñe la función que encuentre el elemento menor de un vector de enteros.

#include <iostream>
using namespace std;

// Vector que Encuentra el Elemento Mayor
int VecEncuentraMayor(int x[], int total) // Vector que encuentra el elemento mayor
{
    int mayor = x[0]; // Asumir que el primer elemento es el mayor inicialmente
    for (int k = 1; k < total; k++)
    {
        if (x[k] > mayor)
        {
            mayor = x[k]; // Actualizar el mayor si se encuentra un elemento más grande
        }
    }
    return mayor;
}

// Vector que Encuentra el Elemento Menor
int VecEncuentraMenor(int x[], int total)
{
    int menor = x[0]; // Asumir que el primer elemento es el menor inicialmente
    for (int k = 1; k < total; k++)
    {
        if (x[k] < menor)
        {
            menor = x[k]; // Actualizar el menor si se encuentra un elemento más pequeño
        }
    }
    return menor;
}

int main()
{
    const int MAX = 10; // Elementos Máximos del vector
    int x[MAX] = {34, 7, 23, 32, 5, 62, 78, 90, 3, 21}; // Elementos del vector

    cout << "El vector es:";
    for (int i = 0; i < MAX; i++)
    {
        cout << " " << x[i];
    }

    int mayor = VecEncuentraMayor(x, MAX); // Imprime el Elemnto Mayor del Vector
    cout << endl << "El elemento mayor en el vector es: " << mayor << endl;

    int menor = VecEncuentraMenor(x, MAX); // Imprime el Elemento Menor del Vector
    cout << "El elemento menor en el vector es: " << menor << endl;

    return 0;
}
