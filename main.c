#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra [10];
    char otraPalabra [10] = "chau";
    int largo;
    int comp;

    printf ("Ingrese una palabra: ");
    fflush (stdin);
    gets (palabra);        //scanf("%[^\n]", palabra); // EN LINUX: se usa para leer archivos, fgets (palabra, (cantidad de letras), stdin);

    strcpy (palabra, otraPalabra);       // strcpy (destino, origen);
    printf ("%s", palabra);
    /*
    largo = strlen(palabra);
    palabra[largo - 1] = '/0';

    largo = strlen(palabra);

    printf ("El largo es: %d", largo);
    */

    comp = strcmp (palabra, otraPalabra);
    printf ("\nCompara: %d", comp);

    return 0;
}
