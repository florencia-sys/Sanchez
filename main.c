#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vectorDeNumeros[10]={7,-5,5,-6,-1,-4,10,5,4,-1};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag = 0;
    char opcion;

    do
    {
        printf ("1. Cargar numeros\n");
        printf ("2. Mostrar todo \n");
        printf ("3. Mostrar negativos\n");
        printf ("4. Mostrat promedio positivos\n");
        printf ("5. Mostrar maximo\n");
        printf ("6. Mostrar minimo\n");
        printf ("7. Salir\n");
        printf ("Elija una opcion: ");
        scanf ("%d", opcion);

        1 Cargar.
        2 Mostrar todo.
        3 Mostrar negativos.
        4 Mostrar promedio positivos.
        5 Mostrar maximo.
        6 Mostrar minimo.
        7 Salir.
    }while ( opcion != 7 );

    /*
    printf("\tCARGA DE DATOS\n");
    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vectorDeNumeros[i]);
    }*/

    printf("\tMUESTRO EL VECTOR\n");
    for(i=0; i<10; i++)
    {
        printf("%d\n", vectorDeNumeros[i]);
    }
    printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]<0)
        {
           printf("%d\n", vectorDeNumeros[i]);
        }

    }

    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]>=0)
        {
            sumaDePositivos += vectorDeNumeros[i];
            contadorDePositivos++;
        }
    }
    promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

    printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


     printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);

    for( i = 0; i < 10; i++)
    {
        if (flag == 0 || vectorDeNumeros [i] > maximo)
        {
            maximo = vectorDeNumeros[i];
        }
        if (flag == 0 || vectorDeNumeros [i] < minimo)
        {
            minimo = vectorDeNumero [i];
        }
        flag = 1;
    }


     printf("MAXIMO: %d\n", maximo);
     for (i = 0; i < 10; i++)
     {
         if (vectorDeNumeros [i] = maximo;)
         {
             printf ("%d-", i);
         }
     }

     printf("MINIMO: %d\n", miniimo);
     for (i = 0; i < 10; i++)
     {
         if (vectorDeNumeros [i] = minimo;)
         {
             printf ("%d-", i);
         }
     }

    printf("MAXIMO: %d -- MINIMO: %d", maximo, minimo);


     switch(opcion)

     case '1':



    printf("\tCARGA DE DATOS\n");
    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vectorDeNumeros[i]);
    }
    break;

     case '2':

          printf("\tMUESTRO EL VECTOR\n");
    for(i=0; i<10; i++)
    {
        printf("%d\n", vectorDeNumeros[i]);
    }

     case '3':

          printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]<0)
        {
           printf("%d\n", vectorDeNumeros[i]);
        }

    }
    break;

     case '4':

         for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]>=0)
        {
            sumaDePositivos += vectorDeNumeros[i];
            contadorDePositivos++;
        }
    }
    promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

    printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


     printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);
     break;

     case '5':

    for( i = 0; i < 10; i++)
    {
        if (flag == 0 || vectorDeNumeros [i] > maximo)
        {
            maximo = vectorDeNumeros[i];
        }

    }


     printf("MAXIMO: %d\n", maximo);
     for (i = 0; i < 10; i++)
     {
         if (vectorDeNumeros [i] = maximo;)
         {
             printf ("%d-", i);
         }
     }
    break;

     case '6':

        for( i = 0; i < 10; i++)
    {
        if (flag == 0 || vectorDeNumeros [i] < minimo)
        {
            minimo = vectorDeNumero [i];
        }
        flag = 1;
    }

     printf("MINIMO: %d\n", miniimo);
     for (i = 0; i < 10; i++)
     {
         if (vectorDeNumeros [i] = minimo;)
         {
             printf ("%d-", i);
         }
     }
    break;







    return 0;
}
