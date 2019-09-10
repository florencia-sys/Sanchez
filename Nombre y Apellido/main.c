#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [15];
    char apellido [15];
    char nombreYapellido [31];
    char x;
    char mayApellido;

    printf ("Ingrese su nombre: ");
    fflush (stdin);
    gets (nombre);
    /*
    printf ("Ingrese su apellido: ");
    fflush (stdin);
    gets (apellido);
    */
    printf ("%s", strupr (nombre));
    //mayApellido = strupr (apellido [0]);

   // printf ("%s",x);
}
