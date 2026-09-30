#include <stdio.h>

int main() {

    //declarando variaveis
    int vetor[8], i, x, y, soma;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posicao X (0 a 7): ");
    scanf("%d", &x);

    printf("Digite a posicao Y (0 a 7): ");
    scanf("%d", &y);

    if (x < 0 || x > 7 || y < 0 || y > 7) {
        printf("Posicao invalida\n");
    } else {
        soma = vetor[x] + vetor[y];
        printf("A soma de vetor[%d] + vetor[%d] e: %d\n", x, y, soma);
    }

    return 0;
}
