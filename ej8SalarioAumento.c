/*
 * File:   ej8SalarioAumento.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 15 de febrero de 2018, 20:17
 *
 * Objetivo
 * Ejercicio 8.
 *  Programa que calcule o novo salario dun obreiro se obtivo un incremento do 25%
 *  sobre o seu salario anterior.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej8SalarioAumento(){
    int salario;
    printf("\nIntroduce el salario original: ");
    scanf("%d",&salario);
    
    printf("El salario nuevo sera de %.2f",(float)salario*1.25);
}



