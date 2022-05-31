#include <stdio.h>
#include <stdlib.h>

int main()
{

char letra = 's';
do {
  int op;
printf("--- Problemas secuenciales--- \n \n Ejercicio 1 \n Ejercicio 2 \n Ejercicio 3 \n \n--- Problemas Condicionales selectivos simples--- \n \n \n Ejercicio 4 \n Ejercicio 5 \n Ejercicio 6 \n Ejercicio 7 \n Ejercicio 8\n\n --- Problemas Condicionales selectivos compuestos--- \n \n Ejercicio 9 \n Ejercicio 10 \n \n --- Problemas con Repeticiones--- \n \n Ejercicio 11 \n Ejercicio 12\n Ejercicio 13 \n Ejercicio 14 \n Ejercicio 15 \n Ejercicio 16 \n \n");
printf ("Ingrese una opcion: \n");
scanf ("%i", &op);

switch(op)
{
    case 1:
    {
       printf(" 1. Suponga que un individuo desea invertir su capital en un banco y desea saber cuanto dinero ganara despues de un mes si el banco paga a razon de 2%% mensual.\n\n");

        printf("Ejercicio 1 \n") ;

        float capital, ganacias;
        capital = 0;
        ganacias = 0;

        printf (" Ingrese el monto que desea invertir\n") ;
        scanf ("%f" , &capital) ;

        ganacias=capital*0.02;

        printf ("Su ganancia mensual sera de: %.2f%$ \n", ganacias);
    }
    break;

    case 2:
        {
            printf("2. Una tienda ofrece un descuento del 15%% sobre el total de la compra\n y un cliente desea saber cuanto debera pagar finalmente por su compra.\n\n");

        printf ("Ejercicio 2\n") ;

        float compra,total;
        total = 0;
        compra = 0;


        printf ("Ingrese el monto de su compra\n") ;
        scanf ("%f", &compra) ;

        total=(compra*0.15);

        printf ("Su total a pagar es de:%.2f \n", total);
        }
    break;

     case 3:
        {
             printf ("3.Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hacen un grupo de estudiantes.\n\n");

        printf ("Ejercicio 3\n") ;

        int cantidadHombres,cantidadMujeres,Total ;
    float porcentajeHombres,porcentajeMujeres ;

       cantidadHombres = 0;
       cantidadMujeres = 0;
       porcentajeHombres= 0;
       porcentajeMujeres = 0;
       Total = 0;

       printf ("Ingrese la cantidad total de alumnos hombres\n") ;
       scanf ("%d", &cantidadHombres);

       printf ("Ingrese la cantidad total de alumnas mujeres\n") ;
       scanf ("%d", &cantidadMujeres);

       Total = (cantidadHombres + cantidadMujeres) ;
       porcentajeHombres = (100 * cantidadHombres)/Total ;
       porcentajeMujeres = (100 * cantidadMujeres)/Total ;

       printf ("El porcentaje de los hombres en el curso es de %.2f:\n", porcentajeHombres) ;
        printf ("El porcentaje de las mujeres en el curso es de %.2f:\n", porcentajeMujeres) ;

        }
    break;

     case 4:
        {
           printf ("4. Determinar si un alumno aprueba a reprueba un curso,\n sabiendo que aprobara si su promedio de tres calificaciones es \n mayor o igual a 7; reprueba en caso contrario.\n\n");
        printf ("Ejercicio 4 \n") ;

        float nota1 = 0, nota2 = 0, nota3= 0, promedio = 0, i = 0;

        printf ("Ingrese su primer nota\n");
        scanf ("%f", &nota1);

        printf ("Ingrese la segunda nota\n");
        scanf ("%f", &nota2);

        printf ("Ingrese la tercer nota\n");
        scanf ("%f", &nota3);

        promedio = (nota1+nota2+nota3)/3;

        if (promedio>=7)
        {
            printf ("Usted esta aprobado\n");
        }
           else if (promedio< 7)
            {
             printf ("Usted esta Desaprobado\n");
           }
        printf("Su promedio total es de %.2f: \n",promedio);
        }
    break;

     case 5:
        {
        printf ("5. En un almacen se hace un 20%% de descuento a los clientes cuya compra supere los %$5000 \n ¿Cual sera la cantidad que pagara una persona por su compra? \n\n");

        printf("Ejercicio 5 \n") ;

        float compraBruto = 0, compraNeto = 0;

        printf ("Ingrese el monto de su compra \n") ;
        scanf ("%f", &compraBruto) ;

        compraNeto = (compraBruto * 20)/100 ;

        if ((compraBruto <= 5000) && (compraBruto > 0))
            {
                printf ("No se aplicaron descuentos, el total de compra es de %.2f \n", compraBruto) ;
            }

        else if (compraBruto > 5000)
            {
                printf ("Se aplico un 20%% de descuento, el total de compra es de %.2f: \n", compraNeto) ;
            }

        while (compraBruto < 0)
            {
                printf ("Numero Invalido \n") ;
                 printf ("Ingrese el monto de su compra \n") ;
                scanf ("%f", &compraBruto) ;
            }

        }
    break;

     case 6:
        {
            printf ("6.Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera: \nSi trabaja 40 horas o menos se le paga %$300 por hora\nSi trabaja mas de 40 horas se le paga %$300 por cada una de las primeras 40 horas y %$400 por cada hora extra. \n\n");

            printf("Ejercicio 6 \n");

            int horas = 0, horasExtra = 0, salario = 0, salarioExtra = 0;

            printf ("Ingrese la cantidad de horas trabajadas \n");
            scanf ("%i", &horas) ;

            horasExtra = (horas - 40) ;
            salario = (horas * 300) ;

            if (horas <= 40)
            {
                printf ("Su salario es de: %i \n",salario);
            }

            else if (horas > 40)
            {
                salarioExtra = (40 * 300)+ (horasExtra * 400) ;
                printf ("Su salario es de: %i \n", salarioExtra) ;
            }
        }
    break;

     case 7:
        {
        printf ("7.Desarrolle un algoritmo que lea dos numeros y los imprima en forma ascendente \n\n");
        printf ("Ejericio 7 \n") ;

        int num = 0, num2 = 0;

        printf ("Ingrese un numero \n") ;
        scanf ("%i", &num) ;

        printf ("Ingrese otro numero \n") ;
        scanf ("%i", &num2) ;

        if (num > num2)
            {
                printf ("\n%i",num2) ;
                printf ("\n%i",num) ;
            }

        else if (num< num2)
            {
                printf ("\n%i",num) ;
                printf ("\n%i",num2) ;
            }
        }
    break;

     case 8:
        {

        printf ("8.Hacer un algoritmo que calcule el total a pagar por la compra de camisas. \nSi se compran tres camisas o más se aplica un descuento del 20%% sobre el total de la compra. \n Si son menos de tres camisas un descuento del 10%% \n\n");
        printf ("Ejercicio 8 \n") ;

        int cantidadDeRemeras = 0 ;
        float descuento = 0, precio = 0, total = 0;

        printf("Ingrese el precio de unidad de la remera \n") ;
        scanf ("%f", &precio);

        printf("Ingrese la cantidad de remeras compradas \n");
        scanf ("%i", &cantidadDeRemeras);

        total = (precio * cantidadDeRemeras);

        if (cantidadDeRemeras < 3)
            {
                descuento = (0.1* total);
                total = (total - descuento);

                printf ("El total de su compra es de: %.2f\n", total) ;
            }

        else if (cantidadDeRemeras>=3)
            {
                descuento = (0.2 * total);
                total = (total - descuento);
                printf ("El total de su compra es de %.2f \n", total) ;
            }
        }
    break;

     case 9:
        {
            printf ("9. Leer 2 numeros; si son iguales que los multiplique, si el primero es mayor que el segundo que los reste y si no que los sume. \n\n");
            printf ("Ejercicio 9\n");


            int num = 0, num2 = 0;
            float total = 0;


            printf ("Ingrese el primer numero \n");
            scanf ("%i", &num);

            printf("Ingrese el sgundo numero \n");
            scanf("%i", &num2);

            if (num == num2)
                {
                    total = (num * num2);
                    printf ("El resultado es: %.2f \n",total);
                }

            else if (num > num2)
                {
                total =(num - num2);
                printf("El resultado es: %.2f \n", total);
                }

            else if (num < num2)
                {
                    total = (num + num2);
                    printf ("El resultado es: %.2f \n",total);
                }
        }
    break;

     case 10:
        {
            printf ("10.Leer tres numeros diferentes e imprimir el numero mayor de los tres. \n\n");
            printf("Ejercicio 10 \n");

            int num = 0, num2 = 0, num3 = 0;

            printf ("Ingrese un numero \n");
            scanf ("%i",&num);

            printf ("Ingrese un numero \n");
            scanf ("%i",&num2);

            printf ("Ingrese un numero \n");
            scanf ("%i",&num3);

            if ((num == num2) && (num== num3)&& (num2 == num3))
                {
                    printf ("Error, los numeros deben ser distintos");
                }

            else if ((num > num2) && (num > num3))
                {
                    printf ("El mayor numero es el:%i",num);
                }

            else if ((num2 > num) && (num2 > num3))

                {
                    printf ("El mayor numero es el:%i",num2);
                }


            else if ((num3 > num2) && (num3 > num))

                {
                    printf ("El mayor numero es el:%i",num3);

                }

        }
    break;

     case 11:
        {

            printf ("11.Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Programación 1\n\n");

            printf ("Ejercicio 11 \n");

            int  acumulador = 0, i = 1;
            float promedio = 0, notas = 0;

            for (int i=1; i<=7; i++)
                {
                    printf ("Ingrese una nota \n");
                    scanf ("%f", &notas);
                    acumulador = (acumulador + notas);
                }

            promedio = (acumulador/7);

            if (promedio >= 7)
                {
                    printf ("Usted esta aprobado, su promedio es de: %f \.2n", promedio);
                }

            else if (promedio < 7)
                {
                    printf ("usted esta desaprobado, su promedio es de: %.2f \n", promedio);
                }

        }
    break;

     case 12:
        {
            printf ("12 Leer 10 numeros y obtener su cubo y su cuarta\n\n");

            printf ("Ejercicio 12 \n");

            int i =0, num = 0;
            float acumulador = 0, acumulador2 = 0;



            for (i = 0; i <10; i++)
                {
                printf ("\nIngrese un numero \n");
                scanf ("%i", &num);

                acumulador = (num * num);

                printf("%i ^ 2 = %.2f \n",num,acumulador);

                acumulador2 = (num * num * num);

                printf ("%i ^ 3 = %.2f \n", num,acumulador2);
                }

        }
    break;

     case 13:
        {
                printf ("13. Leer 10 numeros e imprimir solamente los numeros positivos\n\n");

                printf ("Ejercicio 13 \n\n");

                int num = 0, i = 0;


                for (i = 0; i <10; i++)
                {
                    printf("Escriba un numero, solo se mostraran los positivos \n");
                    scanf("%i",&num);

                    if (num >= 0)
                        {
                            printf(" \n%i \n", num);
                        }

                    else if(num < 0)
                        {
                            printf("\nNumero Invalido \n");
                        }
                }

        }
    break;

     case 14:
        {
            printf ("14. Leer 15 numeros negativos y convertirlos en positivos e imprimir dichos numeros.\n\n");
            printf ("Ejercicio 14\n");

            int i = 0, num = 0;

            for (i = 0; i < 10; i++)
            {
                printf("Ingrese unicamente numeros negativos\n");
                scanf("%i", &num);



                if (num < 0)
                    {
                        num = (-1 * num);
                        printf ("\n%i \n", num);
                    }
                else if (num > 0)
                    {
                    printf("\nNumero Invalido \n");
                    }
            }


        }
    break;

     case 15:
        {
            printf ("15. Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.\nRealizar un algoritmo para calcular la calificacion promedio y la calificacion mas baja detodo el grupo.");
            printf ("\nEjercicio 15\n");

            int i = 0;
            float nota = 0, acumulador = 0, promedio = 0, notaBaja = 0;

            for (i = 0; i < 40; i++)
            {
                 printf ("Ingrese una nota \n");
                scanf ("%f",&nota);

                acumulador = (acumulador + nota);

                if (acumulador ==nota)
                    {
                        (notaBaja = acumulador);
                    }
                else if (notaBaja > nota)
                {
                    (notaBaja = nota);
                }
            }
            promedio = (acumulador/40);
            printf ("El promedio mas bajo es:%f \n", notaBaja);
            printf ("El promedio es de: %f\n", promedio);
        }
    break;

     case 16:
        {
            printf("16. Calcular e imprimir la tabla de multiplicar de un numero cualquiera.\n Imprimir el multiplicando, el multiplicador y el producto.\n\n");
            printf ("Ejercicio 16\n");

            int num = 0, contador = 1, i= 0, total = 0;





 printf ("\nIngrese un numero para ver su tabla\n");
  scanf ("%i", &num);

                for (i = 0; i < 10; i++)
                {

                    total = (num * contador);

                    printf ("%i x %i = %i\n", num,contador,total);
                    contador = contador + 1;

                }

        }
    break;

default:
{
   printf ("numero Invalido, Intente otro\n");

}


}
printf("Presione 's' para continuar\n");
fflush (stdin);
scanf ("%c", &letra);
}while (letra =='s');
}
