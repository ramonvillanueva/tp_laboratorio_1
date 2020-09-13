#include "operaciones.h"

int IngresarEntero(char texto[]){
    int numeroIngresado;

    printf("%s",texto);
    scanf("%d",&numeroIngresado);

    return numeroIngresado;
}


int SumarNumeros(int primerNumero ,int segundoNumero){
    int resultadoDeLaSuma;

    resultadoDeLaSuma = primerNumero + segundoNumero;

    return resultadoDeLaSuma;
}


int RestarNumeros(int primerNumero ,int segundoNumero){
    int resultadoDeLaResta;

    resultadoDeLaResta = primerNumero - segundoNumero;

    return resultadoDeLaResta;
}


float SacarDivision(int numeroDividendo ,int divisor){
    float resultadoDivision;

    resultadoDivision = (float)numeroDividendo / divisor;


    return resultadoDivision;

}


int SacarMultiplicacion(int primerNumero ,int segundoNumero){
    int resultado;

    resultado = primerNumero * segundoNumero;

    return resultado;

}


int SacarFactorial(int numero){
    int acumuladorFactorial;

    acumuladorFactorial=1;

    for(;numero > 0;numero--){
        acumuladorFactorial = acumuladorFactorial * numero;
    }

    return acumuladorFactorial;

}

