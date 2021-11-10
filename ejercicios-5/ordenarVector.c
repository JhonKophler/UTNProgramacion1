#include<stdio.h>
#define MAX 5

int vectorBase[MAX];
int crearVector(void);
int ordenarVector(int v[]);


int main(){
    ordenarVector(crearVector());
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

int ordenarVector(int v[]){
    int aux =0;
    for (int i = 0; i <= MAX-1; i++)
    {
        for (int j = i+1 ; j <= 5; j++)
        {
            if (vec[i]>vec[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            } 
            
        }
        
    }
    
}