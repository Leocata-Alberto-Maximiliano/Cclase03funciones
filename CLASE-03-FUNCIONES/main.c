#include <stdio.h>
#include <stdlib.h>

int getInt(char mensaje[],char mensajeError[], int min, int max);

float getFloat(char mensaje[],char mensajeError[], float min, float max);

char getChar(char mensaje[],char mensajeError[], char min, char max);

int main()
{
    int edad;
    float altura;
    char sexo;


    edad = getInt("\nIngrese edad: ", "\nError, reingrese edad: ", 1, 100);
    altura = getInt("\nIngrese altura: ","\nError, reingrese altura: ", 0.00, 2.50);
    sexo = getChar("\nIngrese sexo: ", "\nError, reingrese sexo: ", 'f', 'm');

    printf("\nLa edad es: %d", edad);
    printf("\nLa altura es: %f", altura);
    printf("\nEl sexo es: %c", sexo);

    return 0;
}
int getInt(char mensaje[],char mensajeError[], int min, int max)
{
    int valor;

    printf("%s", mensaje);
    scanf("%d", &valor);

     while(valor <  min|| valor > max )
    {
        printf("%s", mensajeError);
        scanf("%d", &valor);
    }

    return valor;
}


float getFloat(char mensaje[],char mensajeError[], float min, float max)
{
    float valor;

    printf("%s", mensaje);
    scanf("%f", &valor);

     while(valor <  min || valor > max )
    {
        printf("%s", mensajeError);
        scanf("%f", &valor);
    }

    return valor;
}

char getChar(char mensaje[],char mensajeError[], char min, char max)
{
    char valor;

    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &valor);

     while(valor !=  min && valor != max )
    {
        printf("%s", mensajeError);
        fflush(stdin);
        scanf("%c", &valor);
    }

    return valor;
}
