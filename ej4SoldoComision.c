/*
 * File:   ej3CapitalBanco.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 15 de febrero de 2018, 20:17
 *
 * Descripción: 
 * Ejercicio 4.
 *      Programa que calcule o soldo que recibirá un vendedor.
 *      Este recibe un soldo base indicado por pantalla mais un
 *      10% extra de comisión.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion
void ej4SoldoComision(){
    int sueldo;
    printf("\nIntroduce sueldo del vendedor: ");
    scanf("%d",&sueldo);
    printf("El sueldo mas la comision sera de: %.2f",sueldo*1.10);
}