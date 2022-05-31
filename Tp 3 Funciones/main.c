#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

Pila cargarPila(Pila copia);
Pila pasarPila (Pila pila1, Pila pila2);
Pila encontrarMenor(Pila pila1, Pila pila2, Pila aux);
Pila OrdenSeleccion(Pila pila1, Pila pila2, Pila aux,Pila ordenada);
Pila InsertarElemento (Pila pila1, Pila pila2, Pila aux);
Pila InsertarElementoYOrdenar (Pila dada, Pila aux, Pila ordenada);
Pila sumarTopeyAnterior (Pila pila1, Pila pila2);
int sumarPila(Pila pila);
int contadorElementos(Pila pila);
float promedioPila(Pila pila);
int numeroPila(Pila pila);
int main()
{
    int op = 0;
    do
    {
   printf("Elija un ejercicio, seleccione un numero mayor a 10 para cerrar.\n");
   scanf ("%i", &op);

   switch (op)
   {

case 1:
    {
    printf ("1. Hacer una funcion que permita ingresar varios elementos a una pila, tanto como quiera el usuario.\n");
    Pila pilita;
    inicpila (&pilita);

   pilita = cargarPila(pilita);
    mostrar (&pilita);
break; }

case 2:
    {

     printf ("2. Hacer una funcion que pase todos los elementos de una pila a otra.\n\n");

    Pila pila1,pila2;
    inicpila(&pila1);
    inicpila(&pila2);

    pila1 = cargarPila(pila1);
    pila2 = pasarPila(pila1, pila2);
    mostrar (&pila2);

break;}

case 3:
{
        printf("3. Hacer una funcion que pase todos los elementos de una pila a otra, pero conservando el orden.\n\n");

    Pila pila1,pila2,pila3;
    inicpila(&pila1);
    inicpila(&pila2);
    inicpila(&pila3);

    pila1 = cargarPila(pila1);
     pila2 = pasarPila(pila1, pila2);
     pila3 = pasarPila(pila2, pila3);
    mostrar (&pila3);


break; }

case 4:
{
  printf("Hacer una funcion que encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila.\n\n");

   Pila pila1,pila2,aux;
    inicpila(&pila1);
    inicpila(&pila2);
    inicpila(&aux);

     pila1 = cargarPila(pila1);
     aux = encontrarMenor(pila1, pila2, aux);
     printf ("\nEl menor elemento es: \n");
     mostrar(&aux);

break;}

case 5:
{
    printf("Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.\nUsar la funcion del ejercicio 4. (Ordenamiento por seleccion)\n\n");
     Pila Ordenada,Aux,Dada,menor;
    inicpila(&Dada);
    inicpila(&Ordenada);
    inicpila(&Aux);
    inicpila(&menor);

    Dada = cargarPila(Dada);
    Ordenada = OrdenSeleccion (Dada,menor,Aux,Ordenada);
    mostrar(&Ordenada);

break;}

case 6:
{
    printf ("Hacer una funcion que inserta en una pila ordenada un nuevo elemento, conservando el ordende esta.\n\n");
     Pila pila1,pila2,aux;
    inicpila(&pila1);
    inicpila(&pila2);
    inicpila(&aux);

     pila1 = cargarPila(pila1);
     pila1 = InsertarElemento ( pila1,  pila2,  aux);
    mostrar (&pila1);

break;}

case 7:
{
    printf ("Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.\nUsar la funcion del ejercicio 6. (Ordenamiento por insercion)\n\n");

    Pila Ordenada,Aux,Dada;
    inicpila(&Dada);
    inicpila(&Ordenada);
    inicpila(&Aux);

    Dada = cargarPila (Dada);
    Ordenada = InsertarElementoYOrdenar (Dada,Aux,Ordenada);
    mostrar (&Ordenada);

break;}

case 8:
    {
        printf ("Hacer una función que sume y retorne los dos primeros elementos de una pila (tope y anterior),sin alterar su contenido.\n\n");
        Pila pila1,pila2;
        inicpila(&pila1);
        inicpila(&pila2);
         int suma = 0;

        pila1 = cargarPila (pila1);
        pila2 = sumarTopeyAnterior (pila1,pila2);
        printf ("El resultado es: %i", tope(&pila2));
break;}

case 9:
    {
    printf ("Hacer una funcion que calcule el promedio de los elementos de una pila.\nPara ello hacer tambien una funcion que calcule la suma, otra para la cuenta y otra que divida.\nEn total son cuatro funciones, y la funcion que calcula el promedio invoca a las otras 3.\n\n");

  float promedio;
    Pila pila;
    inicpila(&pila);
    pila = cargarPila(pila);
    printf("La pila inicial es:");
    mostrar(&pila);
    promedio=promedioPila(pila);
    printf("El promedio de la pila es: %.2f\n\n",promedio);


   break;}

case 10:
    {
       printf ("Hacer una funcion que reciba una pila con numeros de un solo digito (es responsabilidad de quien usa el programa) y que transforme esos digitos en un numero decimal.\nPor ejemplo, la pila:Base 5 - 7 - 6 - 4 - 1 Tope Debe retornar el número: 14675\n\n");
    int  numero;
    Pila pila;
    inicpila(&pila);
    pila = cargarPila(pila);
    numero=numeroPila(pila);
    printf("El numero decimal es: %i\n\n",numero);
   break;}
} //switch
}while (op < 11);
} //main


Pila cargarPila(Pila pilita)
{
    int  i = 1, num = 0;

    printf ("\nCuantos elementos desea ingresar?\n");
    scanf("%i", &num);

     for (i = 1; i <= num; i++)
        {
            leer (&pilita);
        }

    return pilita;
}

Pila pasarPila (Pila pila1,Pila pila2)
{

    while(!pilavacia(&pila1))
          {
              apilar (&pila2,desapilar(&pila1));
          }

    return pila2;
}

Pila encontrarMenor(Pila pila1, Pila pila2, Pila aux)
{
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

    return aux;
}

Pila OrdenSeleccion(Pila dada, Pila menor, Pila aux,Pila ordenada)
{

    while (!pilavacia(&dada))
    {
     apilar(&menor,desapilar(&dada));

    while (!pilavacia (&dada))
        {
            if (tope(&dada) < tope(&menor))
            {
                apilar(&aux,desapilar(&menor));
                apilar (&menor,desapilar(&dada));
            }

            else
            {
                apilar (&aux,desapilar(&dada));
            }
        }

      while (!pilavacia(&aux))
      {
          apilar(&dada,desapilar(&aux));
      }
      apilar (&ordenada,desapilar(&menor));
    }
return ordenada;
}

Pila InsertarElemento (Pila pila1, Pila pila2, Pila aux)
{


    int num = 0;
    printf ("Que numero desea ordenar\n");
    scanf("%i", &num);

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

    return pila1;
}

Pila InsertarElementoYOrdenar (Pila dada, Pila aux, Pila ordenada)
{
    while (!pilavacia(&dada))
    {
      while (!pilavacia(&ordenada)&& tope (&ordenada)> tope(&dada))
      {
          apilar (&aux, desapilar(&ordenada));
      }

    apilar (&ordenada,desapilar (&dada));

    while(!pilavacia(&aux))
    {
        apilar (&ordenada, desapilar(&aux));
    }
}
return ordenada;
}

Pila sumarTopeyAnterior (Pila pila1, Pila pila2)
{
    int suma = 0;
    apilar (&pila2,desapilar (&pila1));
    suma = tope (&pila2) + suma;

     apilar (&pila2,desapilar (&pila1));

     suma = tope (&pila2) + suma;

     apilar(&pila2,suma);
     return pila2;
}

int sumarPila(Pila pila)
{
    int suma=0;
    while(!pilavacia(&pila))
    {
        suma=suma+tope(&pila);
        desapilar(&pila);
    }
    return suma;
}
int contadorElementos(Pila pila)
{
    int contador=0;
    Pila aux;
    inicpila(&aux);
    while(!pilavacia(&pila))
    {
        apilar(&aux,desapilar(&pila));
        contador++;
    }
    return contador;
}
float promedioPila(Pila pila)
{
    float suma,contador,promedio;
    suma=sumarPila(pila);
    contador=contadorElementos(pila);
    promedio=suma/contador;

    return promedio;
}

int numeroPila(Pila pila)
{
    int contador=0,topeActual,numero=0;
    Pila pila2;
    inicpila(&pila2);
    pila = pasarPila(pila,pila2);
    mostrar(&pila);
    while(!pilavacia(&pila))
    {
        topeActual=desapilar(&pila);
        numero=numero+topeActual*pow(10,contador);
        contador++;
    }
    return numero;
}

