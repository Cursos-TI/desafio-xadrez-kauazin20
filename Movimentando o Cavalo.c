#include <stdio.h>

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\nMovimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\nMovimento do Cavalo:\n");

    const int movimentoBaixo = 2;    
    const int movimentoEsquerda = 1; 

    for (int i = 1; i <= movimentoBaixo; i++) {
        printf("Baixo\n");
    }

    int contador = 1;
    while (contador <= movimentoEsquerda) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}