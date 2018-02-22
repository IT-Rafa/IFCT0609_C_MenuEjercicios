/*
 * File:    menu.c
 * Project: ejerciciosC
 * Author: Sistemas - Rafael Martínez (it.rafamartinez@gmail.com)
 *
 * Created on 13 de febrero de 2018, 20:17
 *
 * Descripción: 
 *     Muestra el menú,pide opción y la devuelve
 */
#include "ejercicios.h" //para enlazar y declarar la funcion

void menu() {
        system("cls");
	printf("\nEJERCICIOS C");
	printf("\n------------\n");
	printf(" 1. Senc.-  Circulo                                     41. Func.- Salario segun horas 3\n");
	printf(" 2. Senc.-  Calculos con dos numeros                    42. Func.- Desglose billetes\n");
	printf(" 3. Senc.-  Inversion capital                           43. Array- Maximo y mínimo 10 nums\n");
	printf(" 4. Senc.-  Soldo con 10%% comision                      44. Array- Invertir Array\n");
	printf(" 5. Senc.-  Descuento 15%%                               45  Array- Valor maximo array reales\n");
	printf(" 6. Senc.-  Calificacion final                          46  Array- Ordenar Array\n");
	printf(" 7. Senc.-  Pulsacions ideais                           47  Strng- Frase 50 caracteres\n");
	printf(" 8. Senc.-  Novo salario                                48. Strng- Longitud string\n");
	printf(" 9. Senc.-  Ppresupuesto hospital                       49. Strng- Comparar longitud string\n");
	printf("10. Senc.-  Calculo ganancia                            50. Strng- Quitar y contar a y A\n");
	printf("11. Contr.- aprobado segun media                        51. Strng- Mostrar longitud y repetir si <10\n");
    printf("12. Contr.- Salario segun horas                         52. Strng- Contar y quitar espacios\n");
    printf("13. Contr.- Ordenar dos ascendente                      53. Strng- Intercambio arrays\n");
	printf("14. Contr.- Pulsacions segun sexo                       54. Strng- Nombre y media 3 alumnos\n");
	printf("15. Contr.- Reforestacion                               55. A_S_F - Positivos\n");
	printf("16. Contr.- Mayor de tres numeros                       56. A_S_F - Eliminar espacios\n");
	printf("17. Contr.- Salario segun horas 2                       57. A_S_F - Ordenar array\n");
	printf("18. Contr.- Utilidades por anno                         58. A_S_F - Sustituir aes por oes\n");
	printf("19. Contr.- Descuentos por color bola                   59. A_S_F - MultiplicarX2 n elementos\n");
	printf("20. Contr.- Descuentos segun cantidad                   60. A_S_F - Cont. posit y contarlos\n");
    printf("21. Contr.- Media notas                                 61. Arr2D - Array x2\n");
	printf("22. Contr.- Calcular cubo 10 numeros                	62. Arr2D - ---------\n");
    printf("23. Contr.- Mostrar positivos de 10 numeros         	\n");
    printf("24. Contr.- Mostrar pos, neg y neutros de 20 numeros    \n");
	printf("25. Contr.- Tabla multiplicar                           \n");
	printf("26. Contr.- Salario segun horas 3                       66. otros - Vectorial2D\n");
	printf("27. Contr.- Media edad hombres y mujeres                67. otros - Comprobacion DNI\n");
	printf("28. Contr.- Menor puntuacion varias tiradas de x dados  68. otros - Sucesion Fibonacci\n");
    printf("29. Contr.- Mayor puntuacion varias tiradas de x dados  \n");
    printf("30. Contr.- Sumar segundo a una hora                    \n");
    printf("31. Contr.- Suma pares e impares                        \n");
    printf("32. Contr.- Indicar si es anno bisiesto                 \n");
    printf("33. Contr.- Tarot 1                                     \n");
    printf("34. Func.-  Menu: Factorial y potencia                  \n");
    printf("35. Func.-  Area y perimetro rectangulo                 \n");
    printf("36. Func.-  Indicar si es anno bisiesto                 \n");
    printf("37. Func.-  Tarot 2                                     \n");
    printf("38. Func.-  Factorial                                   \n");
    printf("39. Func.-  Potencia                                    \n");
    printf("40. Func.-  Combinaciones                               \n");

    printf("\nElige una opcion (100 para Salir): ");
    scanf("%d", &opn);
    printf("\n\n");
}