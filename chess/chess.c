#include <stdio.h>

int main () {
    int torre, bispo, rainha, cavalo;
    
    //Movimento da torre
    
    torre = 0;

    printf("###### Movimento da Torre para a Direita ######\n");
    
    while (torre < 5) {
        torre++;
        printf("\nDireita %d", torre);
    }

    //Movimento do Bispo

    printf("\n\n###### Movimento do Bispo para Cima e para Direita ######\n");

    for(bispo = 0; bispo < 5; bispo++) {
        printf("\nCima, Direita %d", bispo);
    }

    //Movimento da Rainha

    printf("\n\n###### Movimento da Rainha para Esquerda ######\n");

    rainha = 0;
    
    do {
        rainha++;
        printf("\nEsquerda %d", rainha);
    } while (rainha < 8);

    //Movimento do Cavalo

    printf("\n\n###### Movimento do Cavalo para Esquerda ######\n");

    for (cavalo = 1; cavalo <= 2; cavalo++) {
        printf("\nBaixo");
        while (cavalo == 2) {
            printf("\nEsquerda");
            cavalo++;
        }
    }

    //Se quisermos reutilizar o movimento do cavalo basta definir 1 para a variavel cavalo
}
