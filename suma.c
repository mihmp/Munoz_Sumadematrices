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
        return 1; //Se cierra por el error//
    }

    return 0;
}
