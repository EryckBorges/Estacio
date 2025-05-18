#include <stdio.h>

//Função para mover a Torre na horizontal para a direita

void torre() {
    //Definimos um valor total de casa na horizontal para a torre percorrer
    for (int x = 8, torre = 1; torre <= x; torre++) {
        printf("\nDireita %d\n", torre);
    }
}

//Função para mover o Bispo 

void bispo (int x, int y) {
    if (x >= 8 || y >= 8) return;

    printf("Cima\n");
    printf("Direita\n");

    bispo (x + 1, y + 1);
    
}

//Função para mover o Cavalo

void cavalo() {
    for (int v = 0; v < 2; v++) {
        printf("\nCima");
        while (v == 1) {
            printf("\nDireita");
            v++;
        }
    }
}

//Função para mover a Dama

void rainha() {
    int rainha = 0;

    while (rainha < 8)
    {
        printf("\nEsquerda");
        rainha++;
    }
    
}

int main () {
    //Movimento da Torre 
    printf("\n////////////////////////////////////////////////////////////////////////////////");
    printf("\n######### Movimento da Torre #########\n");

    torre();

    // //Movimento do Bispo
    printf("\n////////////////////////////////////////////////////////////////////////////////");
    printf("\n######### Movimento do Bispo #########\n\n");

    bispo(0, 0);

    //Movimento do Cavalo

    printf("\n////////////////////////////////////////////////////////////////////////////////");
    printf("\n######### Movimento do cavalo #########\n");
    cavalo();

    //Movimento da Rainha

    printf("\n\n////////////////////////////////////////////////////////////////////////////////");
    printf("\n######### Movimento da Rainha #########\n");
    rainha();
}
