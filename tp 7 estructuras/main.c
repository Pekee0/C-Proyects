#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int matricula;
    char nombre [30];
    char genero; // M, F, O
} stAlumno;


int cargarAlumnos (stAlumno alumnos[], int dimension);
void mostrarAlumnos (stAlumno alumnos[], int validos);
void OrdenarSeleccion (stAlumno alumnos[], int validos);
void clasificargenero (stAlumno alumnos [], int validos);
void ordenanInsercion (stAlumno alumnos [], int validos);
int ContarPorGenero (stAlumno alumnos [], int validos);
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
    printf ("Ejercicio --- 7\n"); // no funciona
    printf ("Ejercicio --- 8\n");

    scanf ("%d", &op);
    system ("cls");

switch (op){

case 1:
{
    //Hacer una función que cargue un arreglo de alumnos, hasta que el usuario lo decida.

    stAlumno Alumnos[30];
    int validos = cargarAlumnos(Alumnos,30);

      system ("pause");
     system ("cls");

break; }

case 2:
{
        // 2. Hacer una función que muestre un arreglo de alumnos por pantalla. Modularizar.

        stAlumno Alumnos [30];
        int validos = cargarAlumnos (Alumnos,30);
        mostrarAlumnos (Alumnos,validos);

        system ("pause");
        system ("cls");
break; }

case 3:
{
        // Hacer una función que muestre por pantalla los datos de un alumno, conociendo su matrícula. Modularizar.

        stAlumno Alumnos [30];
        int validos = cargarAlumnos (Alumnos,30);
        int dato = 0;

        printf ("Ingrese la matricula que esta buscando \n");
        scanf("%d", &dato);
        int pos = buscarMatricula(Alumnos,dato,validos);
        mostrarAlumnoEspecifico(Alumnos,validos,pos);

        system ("pause");
        system ("cls");

break; }

case 4:
{

        // Hacer una función que ordene el arreglo de alumnos por medio del método de selección. El criterio de ordenación es el número de matrícula.

        stAlumno Alumnos [30];
        int validos = cargarAlumnos (Alumnos,30);
        OrdenarSeleccion(Alumnos,validos);


        system ("pause");
     system ("cls");


  break;}

case 5:
{
    //Hacer una función que muestre por pantalla los datos de los estudiantes de un género determinado (se envía por parámetro). Modularizar.

     stAlumno Alumnos [30];
        int validos = cargarAlumnos (Alumnos,30);
        clasificargenero (Alumnos,validos);

     system ("pause");
     system ("cls");
break;}

case 6:
{
        // Hacer una función que inserte en un arreglo ordenado por matrícula un nuevo dato, conservando el orden.

        stAlumno Alumnos [30];
        int validos = cargarAlumnos (Alumnos,30);
        printf ("Su arreglo ordenado: \n");
         OrdenarSeleccion (Alumnos,validos);


       printf ("Ingrese la matricula del alumno nuevo \n");
        fflush (stdin);
        scanf("%d", &Alumnos[validos].matricula);

        printf ("Ingrese el nombre del alumno nuevo \n");
        fflush (stdin);
        gets (Alumnos[validos].nombre);

        printf ("Ingrese el genero del alumno nuevo (m para masculino, f para femenino, o para otro) \n");
        fflush (stdin);
        scanf ("%c", &Alumnos[validos].genero);
        validos ++;

         printf ("Su arreglo ordenado con los datos nuevos: \n");
           OrdenarSeleccion (Alumnos,validos);


     system ("pause");
     system ("cls");


break; }

case 7:
{
    // Hacer una función que ordene el arreglo de alumnos por medio del método de inserción. El criterio de ordenación es el nombre

        stAlumno Alumnos [30];
        int validos = cargarAlumnos (Alumnos,30);
        ordenanInsercion(Alumnos,validos);


        system ("pause");
        system ("cls");


break; }

case 8:
{
    //Hacer una función que cuente y retorne la cantidad de estudiantes de un género determinado (se envía por parámetro) que tiene un arreglo de alumnos.

     stAlumno Alumnos [30];
    int validos = cargarAlumnos (Alumnos,30);
    int contador= ContarPorGenero (Alumnos,validos);
    printf ("La cantidad de alumnos es de: %d \n",contador);

break;  }


return 0;
}// switch
} while (op!= 000); //Do-While
}// main





/// F U N C T I O N S

int cargarAlumnos (stAlumno alumnos[], int dimension)
{
    int i = 0;
    char continuar = 's';

    while (i< dimension && continuar == 's'){

        printf ("Ingrese la matricula del alumno \n");
        fflush (stdin);
        scanf("%d", &alumnos[i].matricula);

        printf ("Ingrese el nombre del alumno \n");
        fflush (stdin);
        gets (alumnos[i].nombre);

        printf ("Ingrese el genero del alumno (m para masculino, f para femenino, o para otro) \n");
        fflush (stdin);
        scanf ("%c", &alumnos[i].genero);

        i++;

        printf ("Desea seguir ingresando datos? (s/n) \n");
        fflush(stdin);
        scanf ("%c", &continuar);
        }

return i;
}


void mostrarAlumnos (stAlumno alumnos[], int validos)
{
    int i = 0;

    while (i< validos){
        printf ("---------------\n");
        printf("Matricula: %d \n", alumnos[i].matricula);
        printf("Nombre: %s \n", alumnos[i].nombre);
        printf("Genero: %c \n", alumnos[i].genero);
        i++;
        printf ("---------------\n");

    }
}


int buscarMatricula (stAlumno alumnos[], int dato, int validos)
{
    int i =0;
    int flag = 0;

        while (i< validos && flag == 0){

        if (alumnos[i].matricula == dato){

            flag = 1;
        }

        else {

            i++;
        }

    }

    if (flag == 0){

        i = -1;
    }

return i;

}

void mostrarAlumnoEspecifico(stAlumno alumnos[], int validos, int pos)
{
    printf ("El alumno encotrado es: \n");
        printf ("---------------\n");
        printf("Matricula: %d \n", alumnos[pos].matricula);
        printf("Nombre: %s \n", alumnos[pos].nombre);
        printf("Genero: %c \n", alumnos[pos].genero);
        printf ("---------------\n");
}


void OrdenarSeleccion (stAlumno alumnos[], int validos)
{
  int i,j,aux,min = 0;

  for (i = 0; i< validos; i++){
        min = i;

    for (j = i+1; j < validos; j++){

        if ( alumnos[i].matricula > alumnos[j].matricula){
                        min = j;


            }
        }


                aux = alumnos[i].matricula;
                alumnos [i].matricula = alumnos[min].matricula;
                alumnos[min].matricula = aux;


    }
         for (i = 0; i< validos; i++){
        printf ("---------------\n");
        printf("Matricula: %d \n", alumnos[i].matricula);
        printf("Nombre: %s \n", alumnos[i].nombre);
        printf("Genero: %c \n", alumnos[i].genero);
        printf ("---------------\n");
         }
}


void clasificargenero (stAlumno alumnos [], int validos)
{
    int i = 0;
    char m,f,o;

    for ( i = 0; i< validos ; i++){

        if (alumnos[i].genero == 'm'){

        printf ("---------------\n");
        printf("Matricula: %d \n", alumnos[i].matricula);
        printf("Nombre: %s \n", alumnos[i].nombre);
        printf("Genero: %c \n", alumnos[i].genero);
        printf ("---------------\n");

        }

        else if (alumnos [i].genero == 'f'){

              printf ("---------------\n");
        printf("Matricula: %d \n", alumnos[i].matricula);
        printf("Nombre: %s \n", alumnos[i].nombre);
        printf("Genero: %c \n", alumnos[i].genero);
        printf ("---------------\n");

        }

        else if (alumnos [i].genero == 'o'){

              printf ("---------------\n");
        printf("Matricula: %d \n", alumnos[i].matricula);
        printf("Nombre: %s \n", alumnos[i].nombre);
        printf("Genero: %c \n", alumnos[i].genero);
        printf ("---------------\n");

        }


    }

}


void ordenanInsercion (stAlumno alumnos [], int validos)
{
    int i,pos;
    char aux [1];

    for (i = 0; i>validos; i++){

        pos = i;
        strcpy (aux,alumnos[i].nombre);

        while ( (pos<0) &&  (alumnos[pos-1].nombre > aux [1])){

            alumnos[pos]= alumnos[pos-1];
            pos--;

        }

        strcpy (alumnos[pos].nombre, aux[1]);

    }

     for (i = 0; i<validos; i++){
        printf ("---------------\n");
        printf("Matricula: %d \n", alumnos[i].matricula);
        printf("Nombre: %s \n", alumnos[i].nombre);
        printf("Genero: %c \n", alumnos[i].genero);
        printf ("---------------\n");
         }

}

int ContarPorGenero (stAlumno alumnos [], int validos)
{


     char opcion [1];
    printf ("Indique un genero para saber que estudiantes desea contar. (Masculino,Femenino;otros) \n");
    scanf("%s", &opcion[1]);

     int i = 0;
    int contador = 0;
    char m,masculino ,f, femenino, o, otros;

    for ( i = 0; i< validos ; i++){

        if (alumnos[i].genero == 'm' &&  opcion[1] == masculino){

        contador++;

        }


        else if (alumnos [i].genero == 'f' && opcion[1] == 'femenino'){

       contador++;

        }

        else if (alumnos [i].genero == 'o' && opcion[1] == 'otros'){

            contador++;
        }


    }

    return contador;
}
