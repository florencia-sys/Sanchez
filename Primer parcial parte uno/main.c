#include <stdio.h>
#include <stdlib.h>
#include "cabecaras.h"

int main()
{
   char nombre[51], apellido[51], sexo;
   int codigo, descripcion, duracion, idGenero, opcion, len, init;

      init = inicializarArray (arrayActores, len);

    if (init == -1)
        printf("No se pudo inicializar el vector");
    else

   do
   {
       system("cls");
       printf ("1.Gestion de actores\n2.Gestion de elencos\n3.SALIR\n");
       printf ("Elija una opcion: ");
       scanf ("%d", opcion);

       switch(opcion)
       {
       case 1:
                inicializarArray (arrayActores, len);
                altas (arrayActores, codigo, nombre, apellido, sexo);
      // case 2:
        //        modificarArray(codigo);


                //modificar ()
                //bajas ()
       }
   }while (opcion != 6);
}







