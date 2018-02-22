/*
 * File:   ejerciciosC_main.c
 * Project: ejerciciosC
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 *
 * Created on 13 de febrero de 2018, 20:17
 *
 * Descripción: 
 *     Entrada principal
 *         - Si se ejecuta con 1 argumentos. ejerciciosC ej1
 *             Ejecuta el ejercicio correspondiente
 *         - Si se ejecuta sin argumentos. ejercicioC
 *             Aparece un menú
 */

#include "ejercicios.h" //Cabecera con las funciones de los ejercicios

int main(int argc, char *argv[]) {
    char ch[1];
    printf("argumentos %d\n", argc);

    opn = 0;
    do {
        if (argc == 1) {
            menu();
        } else {
            //CONVERTIMOS ARGUMENTO 1 EN INT (válido para 1 y 2 digitos.
            //Ej command 2 | command 22)
            opn1 = (int) (argv[1][0] - 48);
            opn2 = (int) (argv[1][1] - 48);
            if (opn2 < 0) {
                opn = opn1;
            } else {
                opn = opn1 * 10 + opn2;
            }
        }

        switch (opn) {
            case 0:
                printf("Mostrar menú");
                break;
            case 1:
                printf("Ejecutamos ejercicio 1...\n");
                ej1Circulo();
                break;
            case 2:
                printf("Ejecutamos ejercicio 2");
                ej2Calculos();
                break;
            case 3:
                printf("Ejecutamos ejercicio 3");
                ej3CapitalBanco();
                break;
            case 4:
                printf("Ejecutamos ejercicio 4");
                ej4SoldoComision();
                break;
            case 5:
                printf("Ejecutamos ejercicio 5");
                ej5Descuento15();
                break;
            case 6:
                printf("Ejecutamos ejercicio 6");
                ej6NotasFinales();
                break;
            case 7:
                printf("Ejecutamos ejercicio 7");
                ej7Pulsaciones();
                break;
            case 8:
                printf("Ejecutamos ejercicio 8");
                ej8SalarioAumento();
                break;
            case 9:
                printf("Ejecutamos ejercicio 9");
                ej9Hospital();
                break;
            case 10:
                printf("Ejecutamos ejercicio 10");
                ej10CompraVenta();
                break;
            case 11:
                printf("Ejecutamos ejercicio 11");
                ej11MediaNotas();
                break;
            case 12:
                printf("Ejecutamos ejercicio 12");
                ej12HorasExtra();
                break;
            case 13:
                printf("Ejecutamos ejercicio 13");
                ej13Ordenar2Num();
                break;
            case 14:
                printf("Ejecutamos ejercicio 14");
		ej14PulsacionesSexo();
                break;
            case 15:
                printf("Ejecutamos ejercicio 15");
		ej15Bosque();
                break;
            case 16:
                printf("Ejecutamos ejercicio 16");
                ej16Mayor3nums();
                break;
            case 17:
                printf("Ejecutamos ejercicio 17");
                ej17HorasExtraDoble();
                break;
            case 18:
                printf("Ejecutamos ejercicio 18");
                ej18Utilidades();
                break;
            case 19:
                printf("Ejecutamos ejercicio 19");
                ej19Bolitas();
                break;
            case 20:
                printf("Ejecutamos ejercicio 20");
                ej20Computadoras();
                break;
            case 21:
                printf("Ejecutamos ejercicio 21");
                ej21NotaMediaSiete();
                break;
            case 22:
                printf("Ejecutamos ejercicio 22");
                ej22HallarCubo();
                break;
            case 23:
                printf("Ejecutamos ejercicio 23");
                ej23NPositivos();
                break;
            case 24:
                printf("Ejecutamos ejercicio 24");
                ej24PosNegNeutros();
                break;
            case 25:
                printf("Ejecutamos ejercicio 25");
                ej25TablaMult();
                break;
            case 26:
                printf("Ejecutamos ejercicio 26");
                ej26SalarioSemanal();
                break;
            case 27:
                printf("Ejecutamos ejercicio 27");
                ej27MediaEdadSexo();
                break;
            case 28:
            case 29:
                printf("Ejecutamos ejercicio 28 y 29");
                ej28_29DadosMenorMayor();
                break;
            case 30:
                printf("Ejecutamos ejercicio 30");
                ej30SumarSegundo();
                break;
            case 31:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 32:
                printf("Ejecutamos ejercicio 32");
                ej32AnoBisiesto();
                break;
            case 33:
                printf("Ejecutamos ejercicio 33");
                ej33Tarot();
                break;
            case 34:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 35:
                printf("Ejecutamos ejercicio 35");
                ej35Rectangulo();
                break;
            case 36:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 37:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 38:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 39:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 40:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 41:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 42:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 43:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 44:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 45:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 46:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 47:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 48:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 49:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 50:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 51:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 52:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 53:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 54:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 55:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 56:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 57:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 58:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 59:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 60:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 61:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 62:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 63:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 64:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            case 65:
                printf("Ejecutamos ejercicio 31");
                ej31SumarParesImpares();
                break;
            default:
                printf("No existe");
                
                break;

        }
        argc = 1;
        if (opn != 100) {
            printf("\n\nPulsa Enter para seguir\n");
            getchar();
            getchar();
        }

    } while (opn != 100);
}
