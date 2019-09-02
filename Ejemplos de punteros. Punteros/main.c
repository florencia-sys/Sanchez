#include <stdio.h>
#include <stdlib.h>

int unNumero;
int DameUnEntero (char* mensaje);

nain ()
{
    unNumero = DameUnEntero ("Ingrese su edad");
    printf ("El numero es : %d", unNumero);

    return 0;
}
int DameUnEntero (char* mensaje, int max);
printf ("Ingrese un numero");
{
int aux;
printf ("%s", mensaje);
scanf ("%d", &aux);

while (aux > max)
{
    printf ("%s", mensaje);
    scanf ("%d", &aux);
}
}
return aux;
}
