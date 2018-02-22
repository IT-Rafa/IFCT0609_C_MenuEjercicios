/*
 * File:   ej31SumarParesImpares.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 18 de febrero de 2018, 20:17
 *
 * Descripción: 
 *		Programa que sume independientemente los pares y los impares de los números
 *		comprendidos entre 1 y 100
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej31SumarParesImpares()
{
    int i;
    int sumaPares = 0;
    int sumaImpares = 0;
    for (i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            sumaPares += i;
        }else{
            sumaImpares += i;
                }
    }
    printf("\nLos pares suman %d", sumaPares);
    printf("\nLos pares suman %d", sumaImpares);
}