
#include <stdlib.h>
#include "operaciones.h"


int main()
{
    int opcion;
    int primerNumero;
    int segundoNumero;

    int resultadoSumar;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorialUno;
    int resultadoFactorialDos;



    do{
        printf("1.Ingresar 1er operando (A=X).");
        printf("\n2.Ingresar 2do Operando(B=Y).");
        printf("\n3.Calcular todas las operaciones.");
        printf("\n4.Mostrar resultados.");
        printf("\n5.Salir.");
        printf("\nElija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion){
        case 1:
            //printf("Ingrese el primero numero: ");
            //scanf("%d",&primerNumero);
            primerNumero = IngresarEntero("Ingrese el primer numero: ");
            break;

        case 2:
            //printf("Ingrese el segundo numero: ");
            //scanf("%d",&segundoNumero);
            segundoNumero =IngresarEntero("Ingrese el segundo numero: ");
            break;

        case 3:
            resultadoSumar = SumarNumeros(primerNumero ,segundoNumero);
            resultadoResta = RestarNumeros(primerNumero ,segundoNumero);
            resultadoDivision = SacarDivision(primerNumero ,segundoNumero);
            resultadoMultiplicacion = SacarMultiplicacion(primerNumero ,segundoNumero);
            resultadoFactorialUno = SacarFactorial(primerNumero);
            resultadoFactorialDos = SacarFactorial(segundoNumero);
            break;

        case 4:
            printf("El resultado de %d + %d es : %d",primerNumero ,segundoNumero ,resultadoSumar);
            printf("\nEl resultado de %d - %d es : %d",primerNumero ,segundoNumero ,resultadoResta);
            if(resultadoDivision==0){
                printf("No es posible dividir por cero");
            }else{
                printf("El resultado de %d / %d es: %f",primerNumero ,segundoNumero ,resultadoDivision);
            }

            printf("\nEl resultado de %d / %d es : %d ",primerNumero ,segundoNumero , resultadoMultiplicacion);
            printf("\nEl factoreal de %d es: %d y el factorial de %d es: %d\n",primerNumero ,resultadoFactorialUno ,segundoNumero ,resultadoFactorialDos);

        }

    }while(opcion!=5);


    return 0;
}
