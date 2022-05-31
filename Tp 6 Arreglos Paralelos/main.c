#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cargarArreglos (int legajos [20], char nombres [20] [30], int anios [20]);
void mostrarArreglos (int legajos [20], char nombres [20] [30], int anios [20], int validos);
void buscarNombre (int legajos [20], char nombres [20] [30], int anios [20], int validos);
void OrdenarArreglos (int legajos [20], char nombres [20] , int anios [20], int validos);

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
    scanf ("%d", &op);
    system ("cls");

switch (op){

case 1:
    {

    //1. Crear una función que los cargue, hasta que el usuario lo decida.

    int legajos [20];
    char nombres [20] [30];
    int anios [20];

    int validos = 0;

    validos = cargarArreglos (legajos,nombres,anios);
    mostrarArreglos (legajos, nombres, anios, validos);


break;}

case 2:
    {
        // Crear una función que busque dentro del arreglo de legajos y retorne la posición de un determinado valor.

    int legajos [20];
    char nombres [20] [30];
    int anios [20];

    int validos = 0;
  validos = cargarArreglos (legajos,nombres,anios);

  int dato = 0;
  int pos = 0;
  printf ("Ingrese el numero de legajo que desea buscar \n");
  scanf ("%d", &dato);
  pos = buscarPosLegajos (legajos,validos,dato);


    if (pos == -1){

        printf ("No se encontro el legajo seleccionado \n");
    }

    else{

        printf ("el legajo se encuentra en la posicion numero: %d \n", pos);
    }

break; }


case 3:
    {
            // Hacer una función que reciba como parámetro todos los arreglos y encuentre el nombre correspondiente a un determinado legajo y lo imprima por pantalla. Se debe invocar la función 2.
    int legajos [20];
    char nombres [20] [30];
    int anios [20];

    int validos = 0;
  validos = cargarArreglos (legajos,nombres,anios);
  buscarNombre (legajos,nombres,anios,validos);

break; }

case 4:
    {
      // Hacer una función que reciba como parámetro todos los arreglos y los ordene por nombre. (por el método de selección o inserción).

       int legajos [20];
    char nombres [20] [30];
    int anios [20];

    int validos = 0;
  validos = cargarArreglos (legajos,nombres,anios);
  OrdenarArreglos (legajos,nombres,anios,validos);

break; }


case 5:
{
    // Mostrar por pantalla los 3 arreglos pero de a un “registro” o alumno por vez (es decir: muestrael legajo, nombre y años del 1er alumno, luego el legajo, nombre y años del 2do alumno, y así sucesivamente)..

      int legajos [20];
    char nombres [20] [30];
    int anios [20];

    int validos = 0;
  validos = cargarArreglos (legajos,nombres,anios);
  mostrarArreglos (legajos,nombres,anios,validos);



break; }
return 0;
}//switch
}while(op != 000); // Do-while
}// main




///F U N C T I O N S
int cargarArreglos (int legajos [20], char nombres [20] [30], int anios [20])
{
    int i = 0;
    char continuar = 's';


    while (i < 20 && continuar == 's'){

        printf ("Ingrese el legajo del alumno \n");
        scanf ("%d", &legajos[i]);

        fflush (stdin);

        printf ("Ingrese el nombre del alumno (Hasta 30 caracteres) \n");
        scanf ("%s", &nombres [i]);

        fflush (stdin);

        printf ("Ingrese la edad del alumno \n");
        scanf("%d", &anios[i]);

        i++;

        printf ("Desea ingresar los datos de otro alumno ? (s/n) \n");
        fflush(stdin);
        scanf("%c", &continuar);
    }

    return i;
}


void mostrarArreglos (int legajos [20], char nombres [20] [30], int anios [20], int validos)
{
        int i = 0;
        for (i = 0; i< validos; i++){
            printf ("--------------\n");
            printf ("Legajo: %d\n", legajos[i]);
            printf ("Nombre: %s\n", nombres[i]);
            printf ("edad: %d\n", anios[i]);
            printf ("--------------\n");

        }
}

int buscarPosLegajos (int legajos [20], int validos, int dato)
{
    int i = 0;
    int flag = 0;

        while (i < validos && flag == 0){

        if (dato == legajos[i]){

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



void buscarNombre (int legajos [20], char nombres [20] [30], int anios [20], int validos)
{
    int i = 0;
    int dato = 0;
    printf ("Ingrese un legajo para buscar el nombre correspondiente \n");
    scanf ("%d", &dato);

    i = buscarPosLegajos (legajos, validos, dato);
    printf ("Los datos del alumno son: \n");
       printf ("--------------\n");
            printf ("Legajo: %d\n", legajos[i]);
            printf ("Nombre: %s\n", nombres[i]);
            printf ("edad: %d\n", anios[i]);
            printf ("--------------\n");


}


void OrdenarArreglos (int legajos [20], char nombres [20] , int anios [20], int validos)
{
    int i,j;
    char aux [1];


   for (i = 0; i < validos; i++){

        for (j= i+1; j<validos;j++){

            if (nombres [i] > nombres[j]){

                aux[1] = nombres[j];
                nombres [j] = nombres[i];
                nombres[i] = aux[1];
            }
        }
   }

   for (i = 0; i< validos;i++){
      printf ("--------------\n");
        gets(nombres[i]);
      printf ("--------------\n");
   }

}
