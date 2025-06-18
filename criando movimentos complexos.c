#include <stdio.h>

#define TAM 8

void moverTorre(int x, int y, int dx, int dy) {
    x += dx;
    y += dy;

    if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
        printf("Torre -> (%d, %d)\n", x, y);
        moverTorre(x, y, dx, dy);
    }
}

void moverBispoDiagonal(int x, int y, int dx, int dy) {
    x += dx;
    y += dy;

    if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
        printf("Bispo -> (%d, %d)\n", x, y);
        moverBispoDiagonal(x, y, dx, dy);
    }
}
void moverBispo(int x, int y) {
    for (int dx = -1; dx <= 1; dx += 2) {
        for (int dy = -1; dy <= 1; dy += 2) {
            moverBispoDiagonal(x, y, dx, dy);
        }
    }
}

void moverRainha(int x, int y) {
    
    moverTorre(x, y, 1, 0);   
    moverTorre(x, y, -1, 0);  
    moverTorre(x, y, 0, 1);   
    moverTorre(x, y, 0, -1); 

    moverBispo(x, y);
}

void moverCavalo(int x, int y) {
    int movX[2] = {-2, -1};  
    int movY[2] = {1, 2};   

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int nx = x + movX[i];
            int ny = y + movY[j];

            if (nx >= 0 && nx < TAM && ny >= 0 && ny < TAM) {
                if (movX[i] == -2 && movY[j] == 1) {
                    printf("Cavalo (L) -> (%d, %d)\n", nx, ny);
                } else {
                    continue;  
                }
            }
        }
    }
}
int main() {
    int inicioX = 4, inicioY = 4;

    printf("Movimentos da Torre:\n");
    moverTorre(inicioX, inicioY, 1, 0);  
    moverTorre(inicioX, inicioY, -1, 0);  
    moverTorre(inicioX, inicioY, 0, 1);   
    moverTorre(inicioX, inicioY, 0, -1);  

    printf("\nMovimentos do Bispo:\n");
    moverBispo(inicioX, inicioY);

    printf("\nMovimentos da Rainha:\n");
    moverRainha(inicioX, inicioY);

    printf("\nMovimentos do Cavalo:\n");
    moverCavalo(inicioX, inicioY);

    return 0;
}