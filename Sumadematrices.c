#include<stdio.h>

int main(int argc, char const *argv[])
{
    int C[3][2], X[3][2], Y[3][2], num;

    // Ingresar los elementos de la matriz X
    printf("Ingrese los numeros enteros de la matriz X:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num);
            X[i][j] = num;
        }
    }

    // Ingresar los elementos de la matriz Y
    printf("Ingrese los numeros enteros de la matriz Y:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num);
            Y[i][j] = num;
        }
    }

    // Sumar las matrices X y Y y almacenar el resultado en la matriz C
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = X[i][j] + Y[i][j];
        }
    }

    // Imprimir la matriz del resultado de la suma de las dos matrices que logramos hacer 
    printf("La suma de las matrices X y Y es:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
