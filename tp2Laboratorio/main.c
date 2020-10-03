#include <stdio.h>
#include <stdlib.h>

struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}typedef Employee;


int main()
{
    int option = 0;
    do{
        printf("1.Altas");
        printf("\n2.Modificar");
        printf("\n3.Baja");
        printf("\n4.Informar");
        printf("\n5.Salir");
        printf("\nElija una opcion: ");
        scanf("%d",&option);

        switch(option){
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;
        }

    }while(option!=5);

    return 0;
}
