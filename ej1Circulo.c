/*
 * File:   ej1Circulo.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 *
 * Created on 14 de febrero de 2018, 20:17
 * Descripción: 
 *   Ejercicio 1. Pide el radio:
 *      Devuelve
 *          - la longitud de la circunferencia Longitud = PI * Radio
 *          - el área del circulo. Area = PI * Radio al cuadrado
 *             - el volumen de la esfera. Volumen = 4/3 * PI * Radio al cubo
 *      correspondientes
 */

#include "ejercicios.h" //para enlazar y declarar la funcion

void ej1Circulo() {

    float radio;
    printf("Introduce el radio en cms: ");
    scanf("%f", &radio);
    printf("\nCIRCUNFERENCIA\n");
    printf("El radio es de: %.2f cms\n",radio);
    printf("El diámetro es de: %.2f cms\n",radio * 2);
    printf("El perímetro o longitud es de: %.2f cms\n",PI * radio * 2);
    printf("El área es: %.2f cms cuadrados\n",PI * (radio *radio));
    printf("\nESFERA\n");
    printf("El área es: %.2f cms cuadrados\n",4 * PI * (radio *radio));
    printf("El volumen es: %.2f cms al cubo\n",((4 * PI * (radio*radio*radio))/3));
}