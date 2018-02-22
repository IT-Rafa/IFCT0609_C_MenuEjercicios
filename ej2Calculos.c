/*
 * File:   ej2Calculos.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 15 de febrero de 2018, 20:17
 *
 * Descripción: 
 *     Programa que lea dous n�meros, calculando e escribindo o valor da:
 *      Pide 2 n�meros
 *      Devuelve
 *          - Suma
 *          - Resta
 *          - Producto
 *          - Division
 */

#include "ejercicios.h" //para enlazar y declarar la funcion

void ej2Calculos() {
	int num1, num2;
	printf("\nIntroduce el primer numero: ");
	scanf("%d", &num1);
	printf("Introduce el segundo numero: ");
	scanf("%d", &num2);

	printf("\nLos numeros son: %d y %d\n", num1, num2);
	printf("\nLa suma da: %d + %d = %d\n", num1,num2,num1 + num2);
	printf("\nLa resta da: %d - %d = %d\n", num1,num2,num1 - num2);
	printf("\nLa multiplicacion da: %d * %d = %d\n", num1, num2, num1 * num2);
	printf("\nLa division da: %d / %d = %d (con resto %d)\n", num1, num2, num1 / num2, num1 % num2);

}