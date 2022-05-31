#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


int main()
{
    char letra = 's';
do {
  int op;
printf ("Ingrese una opcion: \n");
scanf ("%i", &op);

switch(op)
{


case 1:
{
    printf("1. Cargar desde el teclado una pila DADA con 5 elementos.\nPasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2.\nAmbas pilas inicializadas \n.");

    int i = 0;
    Pila  p, aux1,aux2;
   inicpila (&p);
   inicpila (&aux1);
   inicpila (&aux2);

   for (i = 0; i< 5; i++)
        {
            leer (&p);
        }
        mostrar (&p);

        apilar (&aux1,desapilar(&p));
        apilar (&aux1,desapilar(&p));
        apilar (&aux1,desapilar(&p));
        apilar (&aux2,desapilar(&p));
        apilar (&aux2,desapilar(&p));
        mostrar (&aux1);
        mostrar (&aux2);
}
 break;

 case 2:
{


    printf("2. Cargar desde el teclado la pila ORIGEN e inicializar en vacio la pila DESTINO.\nPasar todos los elementos de la pila ORIGEN a la pila DESTINO.\n");

    Pila origen,destino;
    char continuar ='s';

    inicpila (&origen);
    inicpila (&destino);

    do
        {
            leer (&origen);
            fflush(stdin);
            printf("Si quiere continuar  presione s\n");
            scanf ("%c",&continuar);
        }
    while (continuar == 's');

        mostrar (&origen);

    while (!pilavacia(&origen))
    {
        apilar (&destino,desapilar(&origen));
    }

    mostrar (&destino);
}
break;

case 3:
{

   printf ("3. Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.\n\n");


   int num = 0, i = 1;
   Pila dada, distintos, aux;
   inicpila (&dada);
   inicpila (&distintos);
   inicpila (&aux);

   printf("Cuantos valores desea ingresar\n");
   scanf ("%i", &num);

    for (i = 1; i <= num ;i++)
    {
        leer(&dada);
    }

    mostrar(&dada);

    do
    {

    if (tope(&dada) !=8)
    {
        apilar(&distintos,desapilar(&dada));
    }

    else
    {
        apilar(&aux,desapilar(&dada));

    }

    } while (!pilavacia (&dada));


    printf ("Se muestra la pila distintos:\n");
    mostrar(&distintos);
}
break;

case 4:
{
    printf ("4. Cargar desde el teclado la pila ORIGEN e inicializar en vacio la pila DESTINO.\n Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejandolos en el mismo orden.\n\n");


    int i = 1, num = 0;

    Pila origen, destino, aux;
    inicpila (&origen);
    inicpila (&destino);
    inicpila (&aux);

    printf("Cuantos valores desea ingresar\n");
    scanf ("%i", &num);

    for (i = 1; i<=num; i++)
    {
        leer(&origen);
    }
    printf("\nSe muestra la pila Origen\n");
    mostrar(&origen);

    while (!pilavacia(&origen))
    {
        apilar(&aux,desapilar(&origen));
    }

    while (!pilavacia(&aux))
    {
        apilar(&destino,desapilar(&aux));
    }
    printf("Se muestra la pila destino\n");
    mostrar(&destino);
    break;
}

case 5:
{
    printf("5. Cargar desde el teclado la pila DADA.\n Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella, pero en orden inverso.\n\n");
        int i = 0, num = 0;
        Pila dada,aux,aux2;
        inicpila (&dada);
        inicpila (&aux);
        inicpila (&aux2);

        printf("Cuantos valores desea ingresar\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
        {
            leer(&dada);
        }

        printf ("\nSe muestra la pila dada invertida\n");

        mostrar (&dada);

        while(!pilavacia(&dada))
        {
            apilar(&aux,desapilar(&dada));
        }


        while (!pilavacia(&aux))
        {
            apilar(&aux2,desapilar(&aux));
        }

        while (!pilavacia(&aux2))
        {
            apilar(&dada,desapilar(&aux2));
        }

        printf("\nSe muestra la pila dada\n");

        mostrar (&dada);

break;
}

case 6:

{
    printf("6. Pasar el primer elemento (tope) de la pila DADA a su ultima posicion (base)\n dejando los restantes elementos en el mismo orden.\n\n");


        int i = 0, num = 0;
        Pila dada,aux,aux2;
        inicpila (&dada);
        inicpila (&aux);
        inicpila (&aux2);

        printf("Cuantos valores desea ingresar\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
        {
            leer(&dada);
        }

        mostrar(&dada);

        apilar(&aux,desapilar (&dada));

        while(!pilavacia(&dada))
        {
            apilar (&aux2,desapilar(&dada));
        }

        apilar(&dada,desapilar(&aux));

        while(!pilavacia(&aux2))
        {
            apilar(&dada,desapilar(&aux2));
        }
            printf ("Se muestra la pila dada\n");
            mostrar(&dada);
break;
}
case 7:
{
     printf ("7. Pasar el último elemento (base) de la pila DADA a su primera posicion (tope).\n Dejando los restantes elementos en el mismo orden.\n\n");

      int i = 0, num = 0;
        Pila dada,aux,aux2;
        inicpila (&dada);
        inicpila (&aux);
        inicpila (&aux2);

        printf("Cuantos valores desea ingresar\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
        {
            leer(&dada);
        }

        mostrar(&dada);


        while(!pilavacia(&dada))
        {
            apilar (&aux,desapilar(&dada));
        }

        apilar(&aux2, desapilar(&aux));


        while(!pilavacia(&aux))
        {
            apilar(&dada,desapilar(&aux));
        }

        apilar(&dada,desapilar(&aux2));


            printf ("Se muestra la pila dada\n");
            mostrar(&dada);
break;
}
case 8:
{
        printf("8. Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.\n\n");
         int i = 1 , num = 0;
        Pila mazo,jug1,jug2;
        inicpila (&mazo);
        inicpila (&jug1);
        inicpila (&jug2);

        printf("Cuantos valores desea ingresar\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
        {
            leer(&mazo);
        }

        printf("\nSe muestra mazo\n");

        mostrar(&mazo);

        while(!pilavacia(&mazo))
        {
            apilar(&jug1,desapilar(&mazo));

            if (!pilavacia(&mazo))
            {
                apilar(&jug2,desapilar(&mazo));
            }
        }

        mostrar (&mazo);
        mostrar (&jug1);
        mostrar (&jug2);
break;
}
case 9:
    {
        printf ("9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.\n\n");

        int i = 1 , num = 0, z = 1;
        Pila pilaA,pilaB,aux,aux2;
        inicpila (&pilaA);
        inicpila (&pilaB);
        inicpila (&aux);
        inicpila(&aux2);

        printf("Cuantos valores desea ingresar en la pila A?\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
        {
            leer(&pilaA);
        }



        printf("\nCuantos valores desea ingresar en la pila B?\n");
        scanf ("%i", &num);

        for ( z= 1; z<=num; z++)
        {
            leer(&pilaB);
        }
     while ((!pilavacia(&pilaA)) && (!pilavacia(&pilaB)))
     {
         desapilar(&pilaA);
         desapilar(&pilaB);
     }


        if (!pilavacia(&pilaA)<(!pilavacia(&pilaB)))
            {
                printf("\nLa Pila B posee mas elementos\n");

            }
        else if (!pilavacia(&pilaA)>(!pilavacia(&pilaB)))
        {
                printf ("\nLa pila A posee mas elementos\n");

        }
        else
        {
            printf("\nLas pilas son iguales en cantidad de elementos\n");

        }
break;
}
 case 10:
{
    printf ("10. Comparar las pilas A y B, evaluando si son completamente iguales\n(en cantidad de elementos, valores que contienen y posicion de los mismos).\n Mostrar por pantalla el resultado.\n\n");

       int i = 1 , num = 0, z = 1;
        Pila pilaA,pilaB;
        inicpila (&pilaA);
        inicpila (&pilaB);


        printf("Cuantos valores desea ingresar en la pila A?\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
            {
                leer(&pilaA);
            }



        printf("Cuantos valores desea ingresar en la pila B?\n");
        scanf ("%i", &num);

        for ( z= 1; z<=num; z++)
            {
                leer(&pilaB);
            }
         while ((tope(&pilaA))== (tope(&pilaB)) && (!pilavacia(&pilaA)) && (!pilavacia(&pilaB)))
            {
                desapilar(&pilaA);
                desapilar(&pilaB);
            }

    if (!pilavacia(&pilaA) || (!pilavacia(&pilaB)))
        {
            printf ("Las pilas son distintas\n");
        }

    else
        {
            printf ("Las pilas son iguales\n");
        }
break;
}

 case 11:
    {
        printf ("Suponiendo la existencia de una pila MODELO que no este vacia,\n eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.\n\n");

        int i = 1 , num = 0, z = 1;
        Pila Modelo,DADA,basura,aux;
        inicpila (&Modelo);
        inicpila (&DADA);
        inicpila (&basura);
        inicpila (&aux);

        printf("Cuantos valores desea ingresar en la pila Modelo?\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
            {
                leer(&Modelo);
            }



        printf("Cuantos valores desea ingresar en la pila DADA?\n");
        scanf ("%i", &num);

        for ( z = 1; z <= num; z++)
            {
                leer(&DADA);
            }

        while ((!pilavacia(&DADA) && (!pilavacia(&Modelo))))
                {
                   if (tope(&DADA) == tope(&Modelo))
                    {
                        apilar (&basura,desapilar (&DADA));
                    }

                    else
                        {
                            apilar (&aux, desapilar(&DADA));
                        }
                }
        printf ("\nSe muestra la pila DADA\n");
        mostrar (&aux);

break;
}


 case 12:
    {
        printf ("Suponiendo la existencia de una pila MODELO (vacia o no),\n eliminar de la pila DADA todos los elementos que existan en MODELO.\n");

           int i = 1 , num = 0, z = 1;
        Pila Modelo,DADA,diferente,Iguales;
        inicpila (&Modelo);
        inicpila (&DADA);
        inicpila (&diferente);
        inicpila (&Iguales);

        printf("Cuantos valores desea ingresar en la pila Modelo?\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
            {
                leer(&Modelo);
            }

        printf("Cuantos valores desea ingresar en la pila DADA?\n");
        scanf ("%i", &num);

        for ( z = 1; z <= num; z++)
            {
                leer(&DADA);
            }
        while ((!pilavacia(&DADA)) &&((!pilavacia(&Modelo))))
            {
                if (tope(&DADA) == (tope(&Modelo)))
                    {
                        apilar(&Iguales,desapilar(&DADA));
                    }

                else
                    {
                        apilar (&diferente,desapilar(&DADA));
                    }
            }

        printf("\nSe mustra la pila final\n");
        mostrar (&diferente);

break;
}

case 13:

{
    printf ("13. Suponiendo la existencia de una pila LIMITE,\npasar los elementos de la pila DADA que sean mayores o iguales que el tope de LIMITE a la pila MAYORES,\n y los elementos que sean menores a la pila MENORES\n\n.");

    int i = 1 , num = 0, z = 1;
        Pila limite,DADA,mayores,menores;
        inicpila (&limite);
        inicpila (&DADA);
        inicpila (&mayores);
        inicpila (&menores);

        printf("Cuantos valores desea ingresar en la pila Modelo?\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
            {
                leer(&limite);
            }

        printf("Cuantos valores desea ingresar en la pila DADA?\n");
        scanf ("%i", &num);
          for ( z = 1; z <= num; z++)
            {
                leer(&DADA);
            }

        while ((!pilavacia(&DADA)) &&((!pilavacia(&limite))))
            {
                if (tope(&DADA) >= (tope(&limite)))
                    {
                        apilar(&mayores,desapilar(&DADA));
                    }

                else
                    {
                        apilar (&menores,desapilar(&DADA));
                    }
            }

            printf("\nSe muestra la pila limite\n");
            mostrar(&limite);
             printf("\nSe muestra la pila mayores\n");
            mostrar(&mayores);
             printf("\nSe muestra la pila menores\n");
            mostrar (&menores);

break;
}

case 14:
    {
        printf ("14. Determinar si la cantidad de elementos de la pila DADA es par.\n Si es par, pasar el elemento del tope de la pila AUX a la pila PAR\n y si es impar pasar el tope a la pila IMPAR.\n\n");

        int i = 1 , num = 0;

        Pila aux,DADA,par,impar;
        inicpila (&aux);
        inicpila (&DADA);
        inicpila (&par);
        inicpila (&impar);

        printf ("Cuantos numero desea ingresar en la pila?\n");
        scanf ("%i", &num);

        for (i = 1; i<=num; i++)
            {
                leer(&DADA);
            }

        while (!pilavacia(&DADA))
        {
            apilar(&aux,desapilar(&DADA));

            if (tope(&aux) % 2 == 0 )
            {
                apilar(&par,desapilar(&aux));
            }

            else
            {
                apilar(&impar,desapilar(&aux));
            }
        }

        printf ("\nSe muestra la pila par\n");
        mostrar (&par);
        printf ("\nSe muestra la pila impar\n");
        mostrar (&impar);

break;
}

case 15:

{

        printf ("while (!pilavacia(&Pila1)\n{\n apilar (&Pila2, desapilar(&descarte));\n}\n");

        printf ("15. Cual es la condicion del siguiente ciclo? Cuando finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas)\n\n");

        printf (" A) la condicion del siguiente ciclo es que la pila 1 posea elementos.\n");

        printf(" B) El ciclo finaliza cuando la pila 1 se queda sin elementos");

break;
}


case 16:

{
        printf ("Que realiza el siguiente codigo escrito en lenguaje C?\n (Pila1,Aux y Result son pilas)\n\n");

        printf ("while (!pilavacia(&pila1)\n{\nif(tope(&Pila1)==5)\n{\napilar(&aux,desapilar(&Pila1));\napilar(&result,desapilar(&aux));\n}\n}\n");

        printf ("Este codigo apilara el un elemento de la pila 1 en la pila result\nsiempre y cuando pila 1 tenga elementos y su tope sea igual a 5\n");

break;

}


case 17:

{

    printf ("17. Para el ejercicio Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO\n todos aquellos elementos que preceden al valor 5 (elementos entre el tope y el valor 5).\n No se asegura que exista algun valor 5,\n se realizo el siguiente programa:\n\n");

    printf("int main() \n{\n Pila Origen, Distinto;\ninicpila(&Origen);\ninicpila(&Distinto);\nleer(&Origen);\nif (!pilaVacia(&Origen))\n{\nwhile (tope(&Origen) != 5)\n {\napilar (&Distinto, desapilar(&Origen));\n}\n}\n}\n");

    printf ("A. Resuelve el problema planteado? \n");

    printf("\n Si este codigo resuelve el problema planteado pero posee algunos errores.\n");

    printf  ("\nB. Cuales son los errores que encuentra?\n");

    printf ("\n Uno de los errores se encuentra en la condicion del while ya que la condicion !%=%  5 hace que cualquier numero distinto a 5 entre en el while cuando solamente se nesecitan los precedentes\n");

    printf ("\nC. c. Reescribir el codigo para que resuelva adecuadamente el problema planteado.\n\n");

    int i = 1, num = 0;
    Pila Origen, Distinto;
    inicpila(&Origen);
    inicpila(&Distinto);


    printf("Cuantos numero desea ingresar\n");
    scanf ("%i", &num);

        for (i = 1; i<=num; i++)
        {
            leer(&Origen);
        }

        while (!pilavacia(&Origen))
        {
            if (tope(&Origen) < 5)
            {
                apilar (&Distinto, desapilar(&Origen));
            }

            else
            {
                desapilar(&Origen);
            }
        }

    printf ("\nSe muestra la pila Origen\n");

    mostrar (&Origen);

    printf ("\nSe muestra la pila Distinto\n");

    mostrar (&Distinto);

    printf ("\nD. Indicar los componentes del programa\n");

    printf ("\n Este programa cuenta con un printf, un scanf y un for para el ingreso de la cantidad de elementos en la pila\n Luego posee un while junto con un if y un else que hacen de filtro entre ambas pilas\n y por ultimo se encuentran los mostrar para ver el contenido final de las pilas.");

break;
}

case 18:
{
    printf ("Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):\n\n");

    printf ("while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) )\n {\n apilar (&Descarte, desapilar(&Pila1));\napilar (&Descarte, desapilar(&Pila2))\n}\n");

    printf ("a. Cual es la condicion del ciclo? Explique con sus palabras\n\n");

    printf (" Mientras pila 1 y pila 2 posean datos ambas se van a desapilar en la pila Descarte\n\n");

   printf ("b. Cuales son los posibles estados de ambas pilas al finalizar el ciclo?\n\n");

   printf ("los estados de las pilas pueden ser:\n pila 1 llena y pila 2 vacia\n pila 1 vacia y pila 2 llena\n pila 1 y 2 vacias. ");

break;
}

}

}   while (letra == 's');

return 0;
}
