#include<stdio.h>

//Matriz donde el usuario ingrese dimensión e inicialiice en 0 y la diagonal principal contenga unos 
int main(int argc, char const *argv[])
{
    int filas, columnas, capas;

    printf("Ingrese la cantidad de capas: ");
    scanf("%d", &capas);

    printf("Ingrese la cantidad de filas de la matriz: ");
    scanf("%d", &filas);
    
    printf("Ingrese la cantidad de columnas de la matriz: ");
    scanf("%d", &columnas);
    
    int matriz[filas][columnas];
    // Inicializar la matriz en 0
    for (int k = 1; k < capas; k++) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++){ 
            matriz[i][j] = 0;
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
    printf("\n");
}
        printf("\n");

//Matriz 3 inicializa en 1 
  for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        }
    
    return 0;
}