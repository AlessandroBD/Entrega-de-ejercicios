#include <stdio.h>
#include <stdlib.h>

#define MSJ_INGRESAR "Ingrese un número entre 1 y 366 para obtener un dia de la semana"
#define MSJ_ERR_INVALID "El valor ingresado es inválido"
#define MSJ_ERR_RANG "El valor ingresado está fuera de rango"

#define MSJ_LUN "Lunes"
#define MSJ_MAR "Martes"
#define MSJ_MIE "Miercoles"
#define MSJ_JUE "Jueves"
#define MSJ_VIE "Viernes"
#define MSJ_SAB "Sabado"
#define MSJ_DOM "Domingo"

int main(void) {
    
    int num, dia;
    int c;
    
    printf("%s\n", MSJ_INGRESAR);
    if (scanf("%d", &num) != 1){
        printf("%s\n", MSJ_ERR_INVALID);
        return EXIT_FAILURE;
    }
    if(num < 1 || num > 366){
		printf("%s\n", MSJ_ERR_RANG);
		return EXIT_FAILURE;
    }
    while((c = getchar()) != '\n' && c != EOF);
    
        dia = num % 7;
        
    switch(dia){
        case 0:
            printf("%s\n", MSJ_SAB);
            break;
        case 1:
            printf("%s\n", MSJ_DOM);
            break;
        case 2:
            printf("%s\n", MSJ_LUN);
            break;
        case 3:
            printf("%s\n", MSJ_MAR);
            break;
        case 4:
            printf("%s\n", MSJ_MIE);
            break;
        case 5:
            printf("%s\n", MSJ_JUE);
            break;
        case 6:
            printf("%s\n", MSJ_VIE);
            break;
    }   
    
    return EXIT_SUCCESS;
}
