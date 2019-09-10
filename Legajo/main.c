#include <stdio.h>
#include <stdlib.h>
#define T 3
#define LEN 20

int main()
{
    int legajo[T];
    char nombre [T] [LEN];
    int i;

    for (i = 0; i < T; i++)
    {
        printf ("Ingrese legajo: ");
        scanf ("%d", &legajo[i]);

        printf ("Ingrese nombre: ");
        fflush (stdin);
        gets (nombre[i]);
    }

    for (i = 0; i < T; i++)
    {
        printf ("%d: %s", legajo, nombre);
    }



    return 0;
}
