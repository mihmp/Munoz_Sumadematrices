#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Ingreso semilla de numeros aleatorios//

    int filas, columnas; // Defino variables//

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    if (filas <= 0 || columnas <= 0)
    {
        printf("No es valida las dimensiones, debe ser un numero mayor a 0.\n");
        return 1; // Se cierra por el error//
    }
    // Declaro respuesta y matrices//
    int matrizA[filas][columnas];
    int matrizB[filas][columnas];
    int answer[filas][columnas];

    // Lleno matriz A y la muestro en pantalla//
    printf("Matriz A:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; i < columnas; i++)
        {
            matrizA[i][j] = rand() % 101; // Numeros aleatorios del 0 al 100//
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n"); //Salto de linea//
    }

    return 0;
}
