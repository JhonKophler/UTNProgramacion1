#include<stdio.h>
#define MAXIMO 10 

int vectorBase[MAXIMO];
int crearVector(void);
int analizarVector(int vec[]);


int main(){
    analizarVector(crearVector());
}

int crearVector(void){
    int i,ingresado;

    for ( i = 0; i < MAXIMO; i++)
    {
        printf("INGRESE UN ITEM \n");
        scanf("%d",&ingresado);
        vectorBase[i] = ingresado;
    }    
}

int analizarVector(int vec[]){
    int mayor = -9999;
    int j;

    for( j = 0; j < MAXIMO; j++)
    {
        if (vectorBase[j]>mayor){
            mayor = vectorBase[j];
        }else{
            mayor = mayor;
        }
    }
    printf("TU VALOR MAYOR ES : %d",mayor);
}
