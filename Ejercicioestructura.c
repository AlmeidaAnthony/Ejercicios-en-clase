#include<stdio.h>
#include<string.h>

struct persona
{
    int matricula;
    char nombre[20];
    char direccion[50];
    char carrera[25];
    float promedio;
};

int main(int argc, char const *argv[])
{
    struct persona alumnos[3]; // Arreglo para almacenar tres estudiantes

    for (int i = 0; i < 3; i++)
    {
        printf("Nombre del alumno %d: ", i+1);
        gets(alumnos[i].nombre);
        printf("Matricula: ");
        scanf("%d", &alumnos[i].matricula);
        getchar(); 
        printf("Direccion: ");
        gets(alumnos[i].direccion);
        printf("Carrera: ");
        gets(alumnos[i].carrera);
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
        getchar();
        printf("\n");
    }

    printf("Informacion de los estudiantes:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Estudiante %d:\n", i+1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Matricula: %d\n", alumnos[i].matricula);
        printf("Direccion: %s\n", alumnos[i].direccion);
        printf("Carrera: %s\n", alumnos[i].carrera);
        printf("Promedio: %.2f\n", alumnos[i].promedio);
        printf("\n");
    }

    return 0;
}
