/*
 * File:   ej20Computadoras.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 18 de febrero de 2018, 20:17
 *
 * Descripción: 
 *    Ejercicio20.
 *      Programa onde nunha fabrica de computadores planéase ofrecer aos clientes
 *      un desconto que dependerá do número de computadores que compre.
 *          - menos de 5 -- 10%
 *          - 5 o 9      -- 20%
 *          - 10 o mas   -- 40%
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej20Computadoras()
{
    float precio = 0;
    int cant = 0;
    printf("\nIntroduce precio total: ");
    scanf("%f", &precio);
    printf("Introduce cantidad: ");
    scanf("%d", &cant);
    if (cant > 9) {
        precio *= 0.6;
    } else if (cant > 4) {
        precio *= 0.8;
    } else {
        precio = 0.9;
    }
    printf("\nEl nuevo precio sera: %.2f Euros", precio);
}