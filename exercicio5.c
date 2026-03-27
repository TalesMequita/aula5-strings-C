#include <stdio.h>
int main()
{
    char texto [50] = "vai corinthians";

    int vogais = 0;
    int consoantes = 0;
    int i;

    for(i = 0; texto[i] != '\0'; i++){
        char letra = texto[i];

        if(letra >= 'a' && letra <= 'z'){
            if(letra == 'a' || letra == 'e' || letra == 'i' ||
                letra == 'o' || letra == 'u'){
                    vogais++;
                } else {
                    consoantes++;
                }
        }
    }

    printf("Seu Texto, '%s' contem: %d, %d\n", texto, vogais, consoantes);
    return 0;
}