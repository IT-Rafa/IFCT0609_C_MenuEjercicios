/*
 * File:   ej10CompraVenta.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 16 de febrero de 2018, 20:17
 *
 * Descripción: 
 * Ejercicio 10.
 *      Programa que obteña o prezo en que debe vender o dono dunha
 * 	tenda un artigo que compra, para obter unha ganancia do 30%.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej10CompraVenta(){
    float precio;
    printf("\nIntroduce el precio de compra en Euros: ");
    scanf("%f",&precio);
    printf("El precio de venta sera de %.2f",precio*1.30);
}