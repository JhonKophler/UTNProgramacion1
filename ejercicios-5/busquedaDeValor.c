#include <stdio.h>
#define MAX 5 

int vectorBase[MAX];
int crearVector(void);
int busquedaNumero(int vec[]);
int flag = 0;

int main(){
    busquedaNumero(crearVector());
}

int crearVector(void){
    int i,ingresado;

    for ( i = 0; i < MAX; i++)
    {
        printf("INGRESE UN ITEM \n");
        scanf("%d",&ingresado);
        vectorBase[i] = ingresado;
    }    
}

int busquedaNumero(int vec[]){
    int num = 0;
    printf("INGRESE UN VALOR A BUSCAR : \n");
    scanf("%d",&num);
    for (int j = 0; j < MAX; j++)
    {
        if (num == vec[j])
        {
            printf("SE ENCONTRO EL VALOR \n");
            flag = 1;
        }
    }   
    if (flag == 0)
    {
        printf("NO SE ENCONTRO VALOR \n");
    }
}