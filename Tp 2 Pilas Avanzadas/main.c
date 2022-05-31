#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


int main()
{
int op = 0;
do
{
    printf("Ingrese una opcion\n");
    scanf("%i",&op);

    switch (op)
{


case 1:
    {

    printf(" Sumar los elementos de una pila (usar variables enteras)\n\n");

    int i = 1, num = 0, suma = 0;
    Pila pilita,aux;
    inicpila(&pilita);
    inicpila(&aux);

    printf ("Cuantos valores quiere ingresar? Solamente numeros enteros\n");
    scanf ("%i", &num);

    for (i = 1; i<=num; i++)

    {
        leer(&pilita);
    }

    while (!pilavacia(&pilita))
    {
        suma = (suma + tope(&pilita));
        apilar(&aux,desapilar(&pilita));

    }

   printf ("El total de la suma de los elementos es: %i\n",(suma));

break;}

case 2:
    {
     printf(" contar los elementos de una pila (usar variables enteras)\n\n");

    int i = 1, num = 0, contador = 0;
    Pila pilita,aux;
    inicpila(&pilita);
    inicpila(&aux);

    printf ("Cuantos valores quiere ingresar? Solamente numeros enteros\n");
    scanf ("%i", &num);

    for (i = 1; i<=num; i++)

    {
        leer(&pilita);
    }

    while (!pilavacia(&pilita))
    {
        contador++;
        apilar(&aux,desapilar(&pilita));

    }

   printf ("La cantidad de elementos es: %i\n",(contador));
  break;}

case 3:
    {
        printf("Calcular el promedio de los valores de una pila (usar variables)\n\n");

    int i = 1, num = 0, suma = 0;
    float promedio = 0;
    Pila pilita,aux;
    inicpila(&pilita);
    inicpila(&aux);

    printf ("Cuantos valores quiere ingresar? Solamente numeros enteros\n");
    scanf ("%i", &num);

    for (i = 1; i<=num; i++)

    {
        leer(&pilita);
    }

    while (!pilavacia(&pilita))
    {
        suma = (suma + tope(&pilita));
        apilar(&aux,desapilar(&pilita));

    }

    promedio = (suma/num);

   printf ("El promedio de los elementos es: %.2f\n",(promedio));

   break; }

case 4:
    {
       printf ("Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables enteras, solo pilas)\n\n");

       int i = 1, num = 0;
       Pila pila1, pila2, aux;
       inicpila (&pila1);
       inicpila (&pila2);
       inicpila (&aux);

       printf ("Cuantos valores desea ingresar?\n");
       scanf ("%i", &num);

       for ( i = 1; i<= num; i++)
       {
           leer(&pila1);
       }
   apilar(&aux,desapilar(&pila1));


        while (!pilavacia (&pila1))
        {
            if (tope(&aux) > tope(&pila1))
                {
                    apilar(&pila2,desapilar(&aux));
                     apilar (&aux,desapilar(&pila1));
                }

            else
                {
                    apilar (&pila2,desapilar(&pila1));
                }
        }

    printf ("Se muestra el menor elemento\n");
    mostrar (&aux);

   break; }

case 5:
    {
        printf ("Insertar un elemento en una pila ordenada de menor (tope) a mayor (base) de forma tal que se conserve el orden. (sin variables, solo pilas)\n\n");

        int i = 1, num = 0;
       Pila pila1, pila2, aux;
       inicpila (&pila1);
       inicpila (&pila2);
       inicpila (&aux);

        apilar (&pila1,1);
        apilar (&pila1,2);
        apilar (&pila1,3);

       printf ("Ingrese un valor para ordenar en la pila\n");
       scanf ("%i", &num);

       apilar (&aux, num);

        while  (!pilavacia(&pila1) && tope(&aux) < tope(&pila1))
        {
           apilar(&pila2,desapilar(&pila1));
        }
            if (tope(&aux) >= tope(&pila1))
                {
                    apilar(&pila1,desapilar(&aux));
                }
        while (!pilavacia(&pila2))
        {
            apilar(&pila1,desapilar(&pila2));
        }

        mostrar (&pila1);

   break;}

case 6:
    {
        printf ("Usando lo resuelto en el ejercicio 4, pasar los elementos de una pila a otra\n de forma tal que la segunda pila quede ordenada de mayor (tope) a menor (base).\n Esto se llama método deordenación por selección.\n\n");

          char continuar = 's';
       Pila DADA, MENOR, NUEVA;
       inicpila (&DADA);
       inicpila (&MENOR);
       inicpila (&NUEVA);


        do
       {
        leer(&DADA);
        fflush(stdin);
        printf ("desea cargar mas datos s/n?\n");
        scanf ("%c", &continuar);

       }
       while (continuar == 's');
    apilar(&MENOR,desapilar(&DADA));


        while (!pilavacia (&DADA))
        {
           while (tope(&MENOR) > tope(&DADA))
           {
            apilar(&NUEVA,desapilar(&MENOR));

        }
    apilar (&MENOR,desapilar(&DADA));

    while (!pilavacia(&NUEVA))
    {
        apilar (&MENOR,desapilar(&NUEVA));
    }
        }
       printf ("Se muestra la pila ordenada \n\n");
       mostrar (&MENOR);


  break;  }


case 7:
{
    printf("7. Determinar si un elemento buscado esta dentro de una pila. Al encontrarlo, finalizar la busqueda.\n\n");

    int buscarNum = 0;
    Pila pila1,aux;
    inicpila(&pila1);
    inicpila(&aux);

    apilar(&pila1,1);
    apilar(&pila1,2);
    apilar(&pila1,3);
    apilar(&pila1,4);
    apilar(&pila1,5);

    printf ("Ingrese el numero que desea buscar\n");
    scanf ("%i", &buscarNum);

        while  (!pilavacia(&pila1)&& (tope(&aux) != (buscarNum)))
        {
            apilar (&aux,desapilar(&pila1));


            if (tope(&aux) == (buscarNum))
            {
                printf ("Se encontro el numero\n");
            }

            else
            {
                printf ("no se encontro el elemento\n");
            }
        }

break; }

case 8:
{
    printf ("8. Eliminar un elemento de una pila. El eliminarlo, finalizar el recorrido y dejar el resto en elmismo orden.");

    int num = 0;
    Pila pila1,pila2,aux;
    inicpila(&pila1);
    inicpila(&pila2);
    inicpila(&aux);

    apilar(&pila1,1);
     apilar(&pila1,2);
    apilar(&pila1,3);
    apilar(&pila1,4);
    apilar(&pila1,5);

    printf ("La pila 1 posee los elementos del uno al 5, cual desea eliminar?\n");
    scanf ("%i", &num);
    while(num >5 || num <1)
    {
    printf ("Inserte numero valido\n");
    scanf ("%i", &num);
    }

    while (!pilavacia(&pila1))
    {
        apilar (&aux, desapilar(&pila1));

        if (tope(&aux) == (num))
            {
                desapilar(&aux);
            }
    }
    printf ("Se elimino el elemento seleccionado: %i \n", num);
    mostrar (&aux);


break; }


case 9:
    {
       printf ("Verificar si una pila DADA es capicua.\n\n");

       Pila DADA, aux,pasaje;
       inicpila(&DADA);
       inicpila(&pasaje);
       inicpila(&aux);
        int i = 1, num = 0;

         printf ("Ingrese la cantidad de elementos de la pila\n");
         scanf ("%i", &num);
        for (i = 1; i <= num; i++)
        {
            leer(&DADA);
        }
         apilar (&aux,desapilar(&DADA));

         while (!pilavacia(&DADA))
        {
            apilar(&pasaje,desapilar(&DADA));
        }

        if (tope(&aux) == tope(&pasaje))
        {
            printf("La pila es capicua\n");
        }
        else
        {
            printf("La pila no es capicua\n");
        }

 break;   }

case 10:
{
    printf ("Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre si mismo),\nrealizar un programa que calcule en la pila C la operacion de union.\nA : base 1 2 3 tope \nB: base 2 3 5 7 tope \nPila AUB = base 7 3 5 2 1 tope\n\n");
    Pila pilaA,pilaB,unionAB,aux,unionPila;
    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&unionAB);
     inicpila(&aux);
    inicpila(&unionPila);
     int i = 1, num = 0;

        printf ("Ingrese la cantidad de elementos de la pila\n");
        scanf ("%i", &num);
        for (i = 1; i <= num; i++)
        {
            leer(&pilaA);
        }

      printf ("Ingrese la cantidad de elementos de la pila\n");
        scanf ("%i", &num);
        for (i = 1; i <= num; i++)
        {
            leer(&pilaB);
        }

    printf("Primer conjunto:");
    mostrar(&pilaA);
    printf("Segundo conjunto:");
    mostrar(&pilaB);



    while(!pilavacia(&pilaA))
    {
        apilar(&aux,desapilar(&pilaA));
    }
    while(!pilavacia(&pilaB))
    {
        apilar(&aux,desapilar(&pilaB));
    }

while (!pilavacia(&aux))
{
    apilar(&unionAB,desapilar(&aux));
}
    while(!pilavacia(&unionAB))
    {
        if(tope(&unionAB)==tope(&unionPila))
        {
            apilar(&aux,desapilar(&unionAB));
        }
        else
        {
            apilar(&unionPila,desapilar(&unionAB));
        }
    }
    printf("Union de los conjuntos:");
    mostrar(&unionPila);


break; }


}//switch
} while (op < 11);
}// int main



