#include <stdio.h>
int main()
{
    int reproducoes[] = {120, 150, 80, 200, 300, 250};
    int tamanho = 6;
    int i;
    int maiorSoma = 0;

    for(i = 0; i < tamanho - 1; i++){
        int soma = reproducoes[i] + reproducoes[i + 1];

        if (soma > maiorSoma){
            maiorSoma = soma;
        }
    }
    printf("Maior soma de reproduções consecutivas: %d\n", maiorSoma);

    return 0;
}