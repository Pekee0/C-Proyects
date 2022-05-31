#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <string.h>
void cargarArray (int ArrFill[], int dimension, int *validos);
void mostrarArray (int mostrar[], int *validos);
void sumarValidos (int array[], int dimension, int *validos);
void pasarArregloAPila ( Pila *pila1, int arreglo[], int validos);
void cargarFloat (float arreglo [], int dimension, int *validos);
void sumarFloat (float arreglo[], int *validos, float *suma);
void cargarArrayChar (char arreglo[], int dimension,int *validos);
void mostrarArrayChar (char mostrar[], int *validos);
void cargarStr (char arreglo []);
void mostrarString (char mostrar[]);
int buscarChar (char arreglo [], char *buscado);
void OrdenacionInsercion (char arreglo [], int *validos);
int insertarElementoOrd (char arreglo[], int validos, char dato);
int  Capicua (int arreglo[], int *validos);
void invertirArreglo (char arreglo [], char *destino);
void OrdenarSeleccion(char arreglo[], int *validos);
char UnirArreglos (char arreglo1, char arreglo2, int *validos);
int main()
{
    char continuar = 's';
    int op = 0;
    while (continuar == 's')
    {
        printf ("Escriba el numero del ejercicio que desea ver.\n");

        printf ("Ejercicio 1\n");
        printf ("Ejercicio 2\n");
        printf ("Ejercicio 3\n");
        printf ("Ejercicio 4\n");
        printf ("Ejercicio 5\n");
        printf ("Ejercicio 6\n");
        printf ("Ejercicio 7\n");
        printf ("Ejercicio 8\n");
        printf ("Ejercicio 9\n");
        printf ("Ejercicio 10\n");
        printf ("Ejercicio 11\n");


        scanf ("%d", &op);
    system ("cls");
        switch (op)
        {


case 1:
    {
    printf ("Hacer una funcion que reciba como parámetro un arreglo de numeros enteros y permita que el usuario ingrese valores al mismo por teclado.\n La funcion debe retornar la cantidad de elementos cargados en el arreglo\n(o pueden utilizar como puntero válidos).\n\n");
    int validos = 0;
    int dimension = 10;
    int arrl [dimension];

    cargarArray (arrl, dimension, &validos);

    printf ("El array: \n");
    mostrarArray (arrl,&validos);
    system ("pause");
    system ("cls");
break; }
case 2:
{
    printf("Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos) cargados en el y los muestre por pantalla.\n\n");
    int validos = 0;
    int dimension = 10;
     int array[dimension];

    cargarArray (array,dimension,&validos);
    printf ("Se muestra el array con una cantidad de elementos de: %d \n",validos);
    mostrarArray (array,&validos);
    system ("pause");
    system ("cls");
break; }

case 3:
{
   printf ("Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos)cargados en el y calcule la suma de sus elementos.");
    int dimension = 10;
    int validos = 0;
    int arreglo [dimension];
    sumarValidos (arreglo, dimension, &validos);
    system ("pause");
    system ("cls");

break;}

case 4:
{
    printf ("Hacer una funcion que reciba como parametro un arreglo, la cantidad de elementos (validos)cargados en el y una Pila.\nLa funcion debe copiar los elementos del arreglo en la pila.\n\n");

    int dimension = 10;
    int validos = 0;
    int arreglo [dimension];
    Pila pila1;
    inicpila(&pila1);
    cargarArray (arreglo,  &dimension, &validos);
    pasarArregloAPila (&pila1, arreglo, validos);
    mostrar(&pila1);
    system ("pause");
    system ("cls");
break;}

case 5:
    {
        printf ("Realizar una funcion que sume los elementos de un arreglo de numeros reales (float) de dimension 100.\n(se recomienda hacer una funcion para cargar y otra para mostrar para este tipo de dato asociado al arreglo)\n\n");


        int validos = 0;
        int arreglo [100]={};
        float suma = 0;
        cargarFloat (arreglo, 100, &validos);
        sumarFloat ( arreglo,  &validos,  &suma);
        printf("El total de la suma es: %.2f\n",suma);
        system ("pause");
    system ("cls");
break;}

case 6:
{
        printf ("Realizar una funcion que indique si un elemento dado se encuentra en un arreglo de caracteres\n\n");

        int validos = 0, flag = 0;
        char buscado;
        char arreglo [10] ={};
        cargarArrayChar (arreglo, 10, &validos);

        printf ("Su string\n");
        mostrarArrayChar (arreglo, &validos);

        printf ("\nIndique que caracter esta buscando\n");
        fflush(stdin);
        scanf ("%c", &buscado);

        flag = buscarChar(arreglo, &buscado);

        if (flag == 1)
        {
            printf ("Su caracter se encontro\n", buscado);
        }

        else
        {
            printf ("Su caracter no se encontro\n", buscado);
    }

    system ("pause");
    system ("cls");

break;}

case 7:
{
            printf ("Realizar una funcion que inserte un caracter en un arreglo ordenado alfabéticamente,conservando el orden.\n\n");

            int validos = 0;
            char dato;
            char arreglo [100] = {};
            cargarArrayChar (arreglo,100, &validos);


            OrdenacionInsercion (arreglo, &validos);
            printf ("Se muestra arreglo ordenado alfabeticamente\n");
            mostrarArrayChar(arreglo,&validos);


            puts ("\nIngrese el dato a insertar\n");
            fflush (stdin);
            scanf ("%c", &dato);

            validos = insertarElementoOrd (arreglo, validos, dato);
            printf ("Se muestra el arreglo fina \n");
            mostrarArrayChar (arreglo, &validos);
    system ("pause");
    system ("cls");

break; }

case 8:
{
    printf ("Realizar una funcion que obtenga el maximo caracter de un arreglo dado\n\n");

    char arreglo[10] = {};
    int validos = 0;

    cargarArrayChar (arreglo, 10, &validos);

    OrdenacionInsercion(arreglo,&validos);
    printf ("Se muestra el array ordenado\n");
    mostrarArrayChar(arreglo, &validos);

    printf ("\n El mayor elemento es: |%c| \n", arreglo[validos -1]);



    system ("pause");
    system ("cls");
break;}

case 9:
{
    printf ("Realizar una funcion que determine si un arreglo es capicua.\n\n");

    int arreglo[10] = {};
    int validos = 0;
    int flag = 0;

    cargarArray (arreglo, 10, &validos);
    flag = Capicua(arreglo,  &validos);

    if (flag == 1)
        printf ("El arreglo es capicua\n");

    else
        printf ("El arreglo no es capicua\n");

 system ("pause");
    system ("cls");

break;}

case 10:
{
    printf ("Realizar una funcion que invierta los elementos de un arreglo. (sin utilizar un arreglo auxiliar)\n\n");

    char arreglo[10] = {};
    int validos = 0;
    char destino;
    cargarStr (arreglo);
    invertirArreglo (arreglo, &destino);
     printf ("\n%s\n", &destino);
    system ("pause");
    system ("cls");

break;}

case 11:
{
        printf ("Ordenar un arreglo segun los siguientes metodos:\na. Seleccion\nb. Insercion \n\n");

        char arreglo[100] = {};
        char validos = 0;
        char arreglo_2 [100] = {};

        puts ("\nOrdenamiento por insercion");
        cargarArrayChar (arreglo, 100, &validos);
        mostrarArrayChar(arreglo,&validos);
        printf ("\n\n");

        OrdenacionInsercion (arreglo, &validos);
        puts ("Su arreglo Ordenado mediante insercion");
        printf ("\n");
        mostrarArrayChar(arreglo, &validos);

        puts ("\n Ordenamiento por seleccion");
        cargarArrayChar (arreglo_2,100, &validos);
        mostrarArrayChar(arreglo_2,&validos);
        printf ("\n\n");

        OrdenarSeleccion (arreglo_2, &validos);
        puts ("Su arreglo ordenado mediante seleccion");
        printf ("\n");
        mostrarArrayChar(arreglo_2,&validos);
        printf ("\n");

        system ("pause");
        system ("cls");

break;}



return 0;
} // switch
} // while (bucle del switch)
} // main



void cargarArray (int ArrFill[], int dimension, int *validos)
{
     int i = 0;
    int num = 0;
    while (*validos<dimension && i == 0)

    {
        printf ("Escriba un numero para cargar el array: ");
        scanf ("%d", &ArrFill[*validos]);

        (*validos) = (*validos) + 1;

        printf ("desea continuar, presione 0 para si y 1 para no.\n");
        scanf ("%i", &num);
        i = num;
    }
}


void mostrarArray (int mostrar[], int *validos)
{
    for (int i =0; i<*validos; i++)
    {
        printf ("|%d|", mostrar[i]);
    }
}

void sumarValidos (int array[],int dimension, int *validos)
{
    int acumulador = 0;
    while (*validos<dimension)
    {
        printf ("Escriba  10 numeros para cargar el array: ");
        scanf ("%d", &array[*validos]);

        *validos = *validos + 1;
        acumulador = acumulador + *validos;
    }
        printf ("El valor de la suma de los validos es de: %d\n",acumulador);
}

void pasarArregloAPila ( Pila *pila1, int arreglo[], int validos)
{
    int i;
    for (i = 0; i< validos; i++)
    {
        apilar(pila1,arreglo[i]);
    }
}

void cargarFloat (float arreglo [], int dimension, int *validos)
{
    int i;
    char continuar = 's';

    for (i=0; i< dimension && continuar == 's'; i++)
    {
        printf("Ingrese un numero real para el arreglo:\n");
        scanf("%f", &arreglo[i]);


        printf ("Desea seguir ingresando numero? (s/n)\n");
        fflush(stdin);
        scanf("%c", &continuar);
    }

    *validos = i;

}

void sumarFloat (float arreglo[], int *validos, float *suma)
{
    int i;
    for (int i =0; i<*validos; i++)
    {
       *suma = *suma + arreglo[i];
    }
}

void cargarStr (char arreglo []){

printf("\nIngrese una cadena de caracteres: \n\n");
    fflush(stdin);
    gets(arreglo);

}



void cargarArrayChar (char arreglo[], int dimension, int *validos)
{
    int i = 0;
    char continuar = 's';

    for (i = 0; i< dimension && continuar == 's'; i++)
    {
        printf ("Ingrese una cadena de caracteres para cargar el arreglo.\n\n");
        fflush(stdin);
        scanf ("%c", &arreglo[i]);

        printf ("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &continuar);
    }

    *validos = i;


}

void mostrarArrayChar (char mostrar[], int *validos)

{
    for ( int i =0; i<*validos; i++)
    {
        printf ("|%c|", mostrar[i]);
    }
}


void mostrarString (char mostrar[])
{
    printf("\nLa cadena de caracteres es:\n\%s\n", mostrar);
}

int  buscarChar (char arreglo [], char *buscado)
{
    int i = 0;
    int flag = 0;

    while (i < strlen(arreglo) && flag == 0)
    {
        if (*buscado != arreglo[i])
        {
           i++;
        }

        else
        {
            flag = 1;
        }

    }

    return flag;
}

void OrdenacionInsercion (char arreglo [], int *validos)
{
    char aux;
    int i, j;

    for ( i = 0; i< *validos; i++){

        j=i;
        aux = arreglo[i];


        while ((j > 0) && (aux<arreglo [j-1])){

            arreglo [j] = arreglo [j-1];
            j--;
        }
    arreglo [j] = aux;

    }
}

int insertarElementoOrd (char arreglo[], int validos, char dato)
{
   int ult = validos -1;
   while (ult>=0 && dato < arreglo[ult]){

    arreglo [ult+1] = arreglo [ult];
    ult--;
   }
   arreglo [ult +1] = dato;
   return validos +1;

}

int  Capicua (int arreglo[], int *validos)
{
    int aux = arreglo [0];
    int aux2 = arreglo [*validos -1];
    int flag = 0;

    if (aux == aux2 && flag ==0)
    {
     flag = 1;
    }

    return flag;
}

void invertirArreglo (char arreglo [], char *destino)
{
    *destino = strrev (arreglo);

}

void OrdenarSeleccion(char arreglo[], int *validos){

    int i,j,posmenor;
    char aux;

    for (i = 0; i< *validos; i++){

    posmenor = i;

    for (j = i+1; j<*validos; j++){

            if (arreglo[j]< arreglo[posmenor]){

                posmenor = j;

            }
        }
        aux = arreglo [i];
        arreglo [i] = arreglo[posmenor];
        arreglo [posmenor] = aux;
    }
}







