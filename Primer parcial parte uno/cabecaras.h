#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char descripcion[51];
    int duracion;
    int idGenero;
} Pelicula;

Pelicula arrayPeliculas [100];

typedef struct
{
    int id;
    char descripcion[51];
} Genero;

Genero arrayGeneros [100];

typedef struct
{
    int codigo;
    char nombre[51];
    char apellido[51];
    char sexo;
} Actor;

Actor arrayActores [100];

typedef struct
{
    int codigoDePelicula;
    int codigoDeActor;
    int valorContrato;
} Elenco;

Elenco arrayElencos [100];

int inicializarArray (Actor arrayActores[100], int len);
int altas (Actor arrayActores[100], int codigo, char nombre[], char apellido[], char sexo);
//int modificarArray(int codigo);
