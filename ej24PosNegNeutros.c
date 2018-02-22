/*
 * File:   ej24PosNegNeutros.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 18 de febrero de 2018, 20:17
 *
 * Descripción: 
 *    Ejercicio 24.
 *		Programa que lea 20 números e imprima cuantos son positivos, cuantos negativos y
 *		cuantos neutros.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej24PosNegNeutros()
{
    int i;
    int nums[10];
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("Introduce el numero %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("\n\nPositivos:");
    for (i = 0; i < 10; i++) {
        if (nums[i] > 0) {
            printf("\n%d", nums[i]);
        }
    }
    printf("\n\nNegativos:");
    for (i = 0; i < 10; i++) {
        if (nums[i] < 0) {
            printf("\n%d", nums[i]);
        }
    }
    printf("\n\nNeutros:");
    for (i = 0; i < 10; i++) {
        if (nums[i] == 0) {
            printf("\n%d", nums[i]);
        }
    }
}