#include<stdio.h>

//Matriz donde el usuario ingrese dimensión e inicialiice en 0 y la diagonal principal contenga unos 
int main(int argc, char const *argv[])
{
    int filas, columnas;
    
    printf("Ingrese la cantidad de filas de la matriz: ");
    scanf("%d", &filas);
    
    printf("Ingrese la cantidad de columnas de la matriz: ");
    scanf("%d", &columnas);
    
    int matriz[filas][columnas];
    
    // Inicializar la matriz en 0
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 0;
        }
    }
    // Establecer 1 en la diagonal principal (si la matriz es cuadrada)
    int dimension = (filas < columnas) ? filas : columnas;
    for (int i = 0; i < dimension; i++) {
        matriz[i][i] = 1;
    }
    
    // Imprimir la matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
