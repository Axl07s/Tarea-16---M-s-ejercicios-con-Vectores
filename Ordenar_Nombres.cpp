// Autor: Axel Molineros
// Fecha: 01-07-2024
// 3) Diseñe la función que ordena este vector usando el algoritmo de ordenación secuencial.
// Debe usar el mismo modelo de ordenación visto en clases (con pequeños ajustes).

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;

// Ordena el vector usando el algoritmo de ordenación secuencial
void OrdenSecuencial (string x[], int total)
{
    for (int k = 0; k < total; k++)
    {
        for (int j = k + 1; j < total; j++)
        {
            if (x[k] > x[j])
            {
                // Intercambia los valores
                string aux = x[k];
                x[k] = x[j];
                x[j] = aux;
            }
        }
    }
}

void ImprimeVector(string x[], int total) // Imprime los elementos del vector
{
    for (int k = 0; k < total; k++)
    {
        cout << endl << x[k];
    }
}

int main()
{
    srand(time(NULL));
    const int MAX = 10;
    string x[MAX] = {"Mariloli", "Larissa", "Mariana", "Dexy", "Jeremy", "Dario", "Kendry", "Kaleb", "Samuel", "Axel"};

    cout << endl << "Vector original ";
    ImprimeVector(x, MAX); // Imprime vector original

    cout << endl << endl << "Vector ordenado ";
    OrdenSecuencial(x, MAX);
    ImprimeVector(x, MAX); // Imprime el vector ordenado

    return 0;
}
