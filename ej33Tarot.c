/*
 * File:   ej33Tarot.c
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 * Project: ejerciciosC
 * Created on 21 de febrero de 2018, 20:17
 *
 * Descripción: 
 *  Ejercicio 33
 *      menú:
 *          1. Adivinar número.
 *          2. Tu número de tarot.
 *          3. Salir.
 *	Op 1:
 *          Genera num aleatorio y pide numero para adivinarlo.
 *          Cada intento indica si se adivino,si es mayor o menor
 *           y los intentos que lleva
 *      Op 2: 
 *          Reducir el nº de nacimiento a un digito de la siguiente 
 *          manera: 6 Enero 1900 = 6 + 1 + 1 + 9 + 0 + 0 = 18 ->
 *          1+8=9
 *                  
 */
#include "ejercicios.h" //para enlazar y declarar la funcion

void ej33Tarot() {
    int op;
    while (op != 3) {
        system("clear");
        printf("\nMenu\n");
        printf("1. Adivinar numero\n");
        printf("2. Tu numero de tarot\n");
        printf("3. Salir\n");
        printf("Elige una opcion: \n");
        scanf("%d", &op);
        
        switch (op) {
            case 1:
                printf("Elegimos opcion 1");
                printf("\n\nEstoy pensando un numero del 1 al 100..");
                int numRand = 1 + rand() % 99;
                int numUs = 0;
                int intentos = 0;
                do {
                    ++intentos;
                    printf("\nPrueba un numero (es el %d): ", numRand);
                    scanf("%d", &numUs);
                    if (numRand < numUs) {
                        printf("\nEl numero es menor");
                    } else {
                        printf("\nEl numero es mayor");
                    }
                } while (numRand != numUs);
                 
                printf("\nLo adivinaste!!!");
                if (intentos == 1) {
                    printf("\nA LA PRIMERA??...\n Sospecho trampa...");
                } else {
                    printf("\nLo conseguiste en %d intentos.", intentos);
                }


                break;
            case 2:
                printf("Elegimos opcion 2");
                int d,m,a,ok;
                
                d=m=a=ok=0;
                printf("\nIntroduce el dia de tu nacimiento: ");
                scanf("%d",&d);
                printf("\nIntroduce el mes de tu nacimiento: ");
                scanf("%d",&d);
                printf("\nIntroduce el anno de tu nacimiento: ");
                scanf("%d",&d);
                if(d<33|m<13){
                    
                    d+m+
                }else{
                    printf("\nFecha erronea");
                }
                
                
                break;
            case 3:
                printf("Salimos del ejercicio...");
                break;
        }
    };
}

