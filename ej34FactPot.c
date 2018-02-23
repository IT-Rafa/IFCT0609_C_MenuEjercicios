/*
 * File:   ej34FactPot.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 23 de febrero de 2018, 20:17
 *
 * Descripción: 
 * 		Ejercicio 3
 *		Hacer programa que lea un numero y visualize un menu:
 *           - Factorial
 *           - Potencia
 *           - Salir
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

int factorial(int n);
int potencia(int base, int exp);

void ej34FactPot()
{
    system("clear");
    int op = 0;
    int num = 0;
    int expo = 0;

    printf("Introduce un numero: ");
    scanf("%d",&num);
    while (op != 3)
    {

        printf("\nMenu\n");
        printf("1. Factorial\n");
        printf("2. Potencia\n");
        printf("3. Salir\n");
        printf("Elige una opcion: \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
        {
            printf("\nEl factorial es: %d", factorial(num));
            break;
        }
        case 2:
        {
            printf("\nTambien vamos a necesitar el exponente: ");
            scanf("%d", &expo);
            printf("\nLa potencia es: %d", potencia(num, expo));
            break;
        }
        case 3:
        {
            printf("\nFin programa\n");
            break;
        }
        }

        getchar();
    };
}

int factorial(int n)
{ // 5*4*3*2*1 =120
    int i=0;
    printf("Calculamos factorial de %d", n);
    for (i = 1; i < n; i++)
    {
        n *= i; // 5*1 | 5*2 | 10*3 | 30*4 | fin: 120
    }
    return n;
}

int potencia(int base, int exp)
{
}