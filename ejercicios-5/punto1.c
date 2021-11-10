#include<stdio.h>

int vectorPromedio(void);

int main(){

    vectorPromedio();

}

int vectorPromedio(void){
    int vectorNumerosIngresados[10];
    int ingresado;
    int promedio;
    int sumaDeVector = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("INGRESE VALOR \n");
        scanf("%d",&ingresado);
        vectorNumerosIngresados[i] = ingresado;
        sumaDeVector += vectorNumerosIngresados[i];
    }

    promedio = sumaDeVector / 10;
    printf("SU PROMEDIO DEL VECTOR ES : %d",promedio);
}   