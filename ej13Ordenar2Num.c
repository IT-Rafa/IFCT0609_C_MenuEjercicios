/*
 * File:   ej13Ordenar2Num.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 16 de febrero de 2018, 20:17
 *
 * Descripción: 
 *    Ejercicio13.
 *         Programa que lea dous números e imprímaos en forma ascendente.
*/
#include "ejercicios.h" //para enlazar y declarar la funcion


void ej13Ordenar2Num(){
    int n1,n2;
    printf("\nIntroduce el primer numero: ");
    scanf("%d",&n1);
    printf("Introduce el segundo numero: ");
    scanf("%d",&n2);
    printf("Escribiendo en orden ascendente...");
    if(n1>n2){
        printf("\n %d \n %d \n",n2,n1);
    } else{
        if (n1==n2){
            printf("\nAmbos numeros son iguales..");
        }
        printf("\n %d \n %d",n1,n2
                );
    }
}