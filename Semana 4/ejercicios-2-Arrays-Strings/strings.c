#include<stdio.h>
#include<string.h>

/* 
    

    

    strlen devuelve el valor de la cantidad de 
    elementos en el array sin considerar el 0
    strcpy copia el contenido de una cadena hacia otra
    strcat concatena dos arrays
    strcmp compara dos cadenas de caracteres


 */

int main(){

    char texto[20];
    char nombre[] = 'Daniel';

    char mago[] = { 'T', 'u' , 's', 'a', 'n','\0'};
    for(int i = 0;i < (sizeof mago); i++){
        print("caracter %c \n",mago[i]);
    }

    printf("nombre %s\n",nombre);
    printf("Tamanio de cadena %i bytes",sizeof nombre);
}
