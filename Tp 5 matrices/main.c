#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cargarMatriz (int mat[][3]);
void mostrarMatriz (int mat[][3]);
void cargarMatrizRandom (int mat[][3]);
void sumarMatriz (int mat [] [3]);
float PromedioMatriz (int mat [] [3]);
int BuscarElemento (int mat [] [3], int dato);
int cargarString (char string [] [50], int fila);
void mostrarString (char string[] [50], int validos);
int BusquedaString (char string[] [50], int filas, int validos, char palabra []);
void ordenarString (char string[][50], int validos);
void cargarMatriz2x2 (int mat[][2]);
void mostrarMatriz2x2 (int mat[][2]);
int Determinante (int matriz [2][2]);

int main()
{
     int op = 0;
    do {

  printf ("Ingrese el numero del ejercicio que quiere ver, escriba 000 para salir.\n");

    printf ("Ejercicio --- 1\n");
    printf ("Ejercicio --- 2\n");
    printf ("Ejercicio --- 3\n");
    printf ("Ejercicio --- 4\n");
    printf ("Ejercicio --- 5\n");
    printf ("Ejercicio --- 6\n");
    printf ("Ejercicio --- 7\n");
    printf ("Ejercicio --- 8\n");
    printf ("Ejercicio --- 9\n");
    printf ("Ejercicio --- 10\n");
    printf ("Ejercicio --- 11\n");
    printf ("Ejercicio --- 12\n");

    scanf ("%d", &op);
    system ("cls");

switch (op){

case 1:
    {
            //Hacer una función que reciba como parámetro una matriz de números enteros y permita que el usuario ingrese valores al mismo por teclado. La función debe cargar la matriz por completo.

                int matriz [3] [3];
                cargarMatriz(matriz);
               printf ("Su matriz: \n");
                mostrarMatriz(matriz);
                system ("pause");
                system ("cls");
break; }

case 2:
    {

        //Hacer una función que reciba como parámetro una matriz de números enteros y la muestre por pantalla (en formato matricial).

        int matriz [3] [3];
            cargarMatriz(matriz);
            printf ("Su matriz: \n");
            mostrarMatriz(matriz);
            system ("pause");
            system ("cls");


   break; }

case 3:
{
            //Hacer una función que reciba como parámetro una matriz de números enteros y que cargue la misma con números aleatorios (sin intervención del usuario). La función debe cargar la matriz por completo.

            int matriz [3] [3];
            cargarMatrizRandom(matriz);
            printf ("Su matriz aleatoria: \n");
            mostrarMatriz(matriz);
            system ("pause");
            system ("cls");

break;}

case 4:
{
            //Hacer una función tipo int que sume el contenido total de una matriz de números enteros.

            int matriz [3] [3];
            cargarMatriz(matriz);
            sumarMatriz (matriz);
             system ("pause");
            system ("cls");
break;}

case 5:
{
        //Hacer una función tipo float que calcule el promedio de una matriz de números enteros.

        int matriz [3] [3];
        cargarMatriz(matriz);
        float promedio = 0;
        promedio = PromedioMatriz (matriz);

        printf ("El promedio de la matriz es: %.2f \n", promedio);
        system ("pause");
            system ("cls");

break; }

case 6:
{
    //Hacer una función que determine si un elemento se encuentra dentro de una matriz de números enteros. La función recibe la matriz y el dato a buscar.

    int matriz [3] [3];
    cargarMatrizRandom (matriz);
    int flag = 0;
    int dato = 0;
    printf ("Ingrese el dato que desea buscar en la matriz\n");
    scanf ("%d", &dato);
    flag = BuscarElemento (matriz, dato);

    if (flag == 1){

        printf ("El elemento se encuentra en la matriz :D \n");
    }

    else {
        printf ("El elmento no se encuentra en la matriz :( \n");
    }

    printf ("Se muestra la matriz\n");
    mostrarMatriz(matriz);
    system ("pause");
    system ("cls");


}

case 7:
{
                //Hacer una función que cargue un arreglo de palabras (strings). La función debe retornar cuantas palabras se cargaron. (puede ser a través del parámetro como puntero)


                int validos = 0;
                char string [5][50];
              validos = cargarString (string, 5);
              mostrarString (string, validos);
              system ("pause");
              system ("cls");


break;}

case 8:
{
    // Hacer una función que muestre un arreglo de palabras.

        int validos = 0;
        char string [5][50];
        validos = cargarString (string, 5);
        mostrarString (string, validos);
        system ("pause");
        system ("cls");

break;}

case 9:
    {
            //Hacer una función que determine si un string se encuentra dentro de un arreglo de strings.La función recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar.
            ///devuelve el índice de la fila en que se encuentra, de lo contrario -1.

            char string [5] [50];
            int validos = 0;
            char palabra [1];
            validos = cargarString (string, 5);

            printf ("Ingrese la palabra que quiere buscar: \n");
            fflush (stdin);
            gets (palabra);

            int posicion = BusquedaString (string, 5, validos, palabra);

            if (posicion == -1){

                printf ("No se encontro la palabra\n");
            }

            else{

                printf ("La palabra se encuentra en la posicion: %d\n", posicion);
            }

            system ("pause");
              system ("cls");

   break; }

case 10:
{
    //. Hacer una función que determine si un string se encuentra dentro de un arreglo de strings ordenado alfabéticamente. La función recibe el arreglo, la cantidad de palabras que contiene y el string a buscar.
    ///devuelve el índice de la fila en que se encuentra, de lo contrario -1

    char string[5] [50];
    int validos = 0;
    char palabra[0];
    validos = cargarString(string, 5);
    puts ("Su string ordenado:");
    ordenarString (string, validos);

       printf ("Ingrese la palabra que quiere buscar: \n");
            fflush (stdin);
            gets (palabra);

            int posicion = BusquedaString (string, 5, validos, palabra);

            if (posicion == -1){

                printf ("No se encontro la palabra\n");
            }

            else{

                printf ("La palabra se encuentra en la posicion: %d\n", posicion);
            }

            system ("pause");
              system ("cls");



break;}

case 11:
{
    //Hacer una función (o varias) que ordene un arreglo de palabras por orden alfabético. (Por selección o inserción, el que más te guste).

      char string[5] [50];
    int validos = 0;
    char palabra[0];
    validos = cargarString(string, 5);
    puts ("Su string ordenado:");
    ordenarString (string, validos);
}

case 12:
{
    //12. Hacer una función que retorne el determinante de una matriz de 2x2.

    int matriz [2] [2];
    int validos = 0;
    cargarMatriz2x2(matriz);
    mostrarMatriz2x2 (matriz);
    int det = 0;
    det = Determinante (matriz);

    printf ("El determinante de su matriz es: %d \n", det);





break;}

}//switch
}while(op != 000); // Do-while
} //main

void cargarMatriz (int mat[][3])
{

    printf ("Ingrese datos para cargar la matriz.\n");
    for (int filas = 0; filas < 3; filas++){

        for (int columnas = 0; columnas < 3; columnas ++){

            printf ("Elemento [%d , %d] : ", filas,columnas);
            scanf("%d", &mat[filas][columnas]);


        }

    }
}


void mostrarMatriz (int mat[][3])
{
    for (int filas = 0; filas < 3; filas++){

        for(int columnas = 0; columnas< 3; columnas++){

            printf ("| %d |", mat[filas] [columnas]);
        }
        printf ("\n");
    }


}



void cargarMatrizRandom (int mat[][3])
{


    for (int filas = 0; filas < 3; filas++){

        for (int columnas = 0; columnas < 3; columnas ++){

            mat [filas] [columnas] = rand () %9 + 1;


        }

    }
}

void sumarMatriz (int mat [] [3])
{
    int acumulador = 0;

     for (int filas = 0; filas < 3; filas++){

        for(int columnas = 0; columnas< 3; columnas++){

            acumulador =  mat[filas] [columnas] + acumulador;
        }

    }

 printf ("El resultado de la suma es : %d \n", acumulador);

}

float PromedioMatriz (int mat [] [3])
{
    int acumulador = 0;
    int contador = 0;
    float Promedio = 0;

     for (int filas = 0; filas < 3; filas++){

        for(int columnas = 0; columnas< 3; columnas++){

            acumulador =  mat[filas] [columnas] + acumulador;
            contador ++;
        }

    }

    printf ("acumulador %d \n", acumulador );
    printf ("Contador %d \n", contador);
    Promedio = (float)acumulador/(float)contador;

    return Promedio;
}

int BuscarElemento (int mat [] [3], int dato)
{
    int flag = 0;
    int acumulador = 0;
    int contador = 0;
    float Promedio = 0;

     for (int filas = 0; filas < 3; filas++){

        for(int columnas = 0; columnas< 3; columnas++){

           if  (dato == mat [filas] [columnas] && flag == 0){

                flag = 1;

           }
        }

    }

    return flag;
}


int cargarString (char string [] [50], int filas)
{
    int i = 0;
    int continuar = 's';
    while (continuar == 's' &&  i < filas ){

       puts ("Ingrese una palabra");
        fflush(stdin);
        gets (string[i]);
        i++;

        puts ("Desea seguir ingresando palabras (s/n)");
        fflush (stdin);
        scanf ("%c", &continuar);

    }
    return i;
}

void mostrarString (char string[] [50], int validos)
{
     int i = 0;

     for (i = 0; i < validos; i++){

        printf ("| %s |", string[i]);
        printf ("\n");
    }

}

int BusquedaString (char string[] [50], int filas, int validos, char palabra [])
{
    int i = 0;
    int flag = 0;
    int comparador = 0;

    while (flag == 0 && i< validos){

        comparador = strcmpi (palabra, string[i]);

        if (comparador == 0){

            flag = 1;
        }

        else{

            i++;
        }
    }

    if (flag == 0){

        i = -1;
    }

    return i;
}

void ordenarString (char string[][50], int validos)
{
    int i, j = 0;
    char aux [50];

    for(i = 0; i< validos; i++){

        for (j= 0; j < validos; j++){

            if (strcmp (string[j], string [i]) >0){

            strcpy (aux, string[j]);
            strcpy (string [j], string[i]);
            strcpy (string[i], aux);

            }
        }
    }

    for (i = 0; i< validos; i++){
        printf ("| %s |", string[i]);
    }
}


int Determinante (int matriz [2][2])
{
    int det = 0;
    det = (matriz [0] [0] * matriz [1] [1])  - (matriz [0] [1] * matriz [1] [0]);
    return det;


    }


void cargarMatriz2x2 (int mat[][2])
{

    printf ("Ingrese datos para cargar la matriz.\n");
    for (int filas = 0; filas < 2; filas++){

        for (int columnas = 0; columnas < 2; columnas ++){

            printf ("Elemento [%d , %d] : ", filas,columnas);
            scanf("%d", &mat[filas][columnas]);


        }

    }
}

void mostrarMatriz2x2 (int mat[][2])
{
    for (int filas = 0; filas < 2; filas++){

        for(int columnas = 0; columnas< 2; columnas++){

            printf ("| %d |", mat[filas] [columnas]);
        }
        printf ("\n");
    }


}


