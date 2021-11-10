#include<stdio.h>
#define MAX 10

int productoDeElementos(void);

int main(){

    productoDeElementos();
    
}

int productoDeElementos(void){
    int vec[MAX],i,aux,producto = 1;
    for (int i = 0; i <= MAX; i++)
    {   
        printf("INGRESE VALOR \n");
        scanf("%d",&aux);
        if (aux >= 0)
        {
            producto = producto * aux;
            
        }else{
            printf("INGRESO UN NUMERO NEGATIVO \n");
            break;
        }
    }
    printf("EL PRODUCTO TOTAL ES : %d",producto);
}