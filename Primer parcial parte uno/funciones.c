#include <stdio.h>
#include <stdlib.h>
#include "cabecaras.h"

int inicializarArray (Actor arrayActores[], int len)
{
int retorno = -1;
int i, j;

if ( arrayActores != NULL )
{
    for (i=0; i<len;i++)
    arrayActores[i].codigo = 0;
    for (j=0; j <len;j++)
    {
        arrayActores[i].nombre[j]= ' ';
        arrayActores[i].apellido[j]= ' ';
    }
    arrayActores[i].sexo= 0;
retorno = 0;}
return retorno;
}

int altas (Actor arrayActores[100], int codigo, char nombre[], char apellido[], char sexo)
{   int  i;
    while ( arrayActores[i].codigo != 0)
{
    i++;
}
    arrayActores[i].codigo = codigo;
    for (int j=0; j<51;j++)
    {
        arrayActores[i].nombre[j] = nombre[j];
        arrayActores[i].apellido[j] = apellido[j];
    }
    arrayActores[i].sexo = sexo;
return 0;
}
/*
int modificarArray(int codigo)
{
    int i, j, nombre, apellido, sexo;
    while (arrayActores[i].codigo != 0)
    {
        i++;
    }
    if (arrayActores[i].codigo != codigo)
    {
        for (j=0;j<100;j++)
        {
        arrayActores[i].nombre[j] = nombre[j];
        arrayActores[i].apellido[j] = apellido[j];
        }
    arrayActores[i].sexo = sexo;
    return 0;}
    else
    {
        return -1;
        printf("No se pudo encontrar el id");
    }
}
*/
