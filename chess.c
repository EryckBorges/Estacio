#include <stdio.h>

int main () {
    int torre, bispo, rainha;
    
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

}
