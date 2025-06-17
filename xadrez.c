#include <stdio.h>

int main() {

    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("Movimento da Torre (for) - 5 casas para a direita:\n");
    
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo (while) - 5 casas na diagonal para cima e direita:\n");
   
    int countBispo = 1;
    while (countBispo <= casasBispo) {
        printf("Cima, Direita\n");
        countBispo++;
    }

    printf("\nMovimento da Rainha (do-while) - 8 casas para a esquerda:\n");

    int countRainha = 1;
    do {
        printf("Esquerda\n");
        countRainha++;
    } while (countRainha <= casasRainha);

    return 0;
}
