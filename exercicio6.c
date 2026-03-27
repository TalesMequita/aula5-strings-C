#include <stdio.h>
int main()
{
    printf("Parte 1 do exercicio - Ordenando ao contrario\n");

    int parte1 [] = {1, 2, 3, 4, 5};
    int i;

    for (i = 4; i >= 0; i--){
        printf("%d\n", parte1[i]);
    }

    printf("\n##########################\n\n");

    printf("Parte 2 do Exercicio - Numeros maiores que 5\n");

    int parte2 [] = {10, 24, 3, 44, 1};
    int j;

    for(j = 0; j < 5; j++){
        
        if(parte2[j] > 5){

        printf("%d\n", parte2[j]);
        } else {

        }
    }

    printf("\nParte 2 do Exericicio - Sobrenome com Letras alternadas\n");

    char sobrenome [10]= "Mequita";
    int k;

    for (k = 0; sobrenome[k] != '\0'; k += 2){

        printf("%c ", sobrenome[k]);
    } 

    printf("\n##########################\n\n");

    printf("Parte 3 do Exercicio Idades Impares\n");

    int idades [] = {23, 44, 52, 27, 9, 17, 90, 52};
    int l;

    for (l = 0; l < 8; l++){
        
        if (idades[l] % 2 != 0){
            printf("%d ", idades[l]);
        }else{}
    }

    printf("\n##########################\n\n");

    return 0 ;

} 