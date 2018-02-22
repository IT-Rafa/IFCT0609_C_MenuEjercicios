/*
 * File:   ej3CapitalBanco.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 15 de febrero de 2018, 20:17
 *
 * Descripción: 
 * Ejercicio 3.
 *	Programa  que  lea  o capital  que  un individuo desexa  investir  nun banco e  quere  saber
 *	canto  diñeiro  gañará  despois  dun mes  se  o banco  paga  a  razón de  2% mensual.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej3CapitalBanco(){
    int capital;
    printf("\nIntroduce el capital en Euros: ");
    scanf("%d",&capital);
    printf("hola");
    printf("\nganara %.2f Euros al mes",(float)(capital*0.02));
    
}