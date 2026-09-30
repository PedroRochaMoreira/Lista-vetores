#include <stdio.h>

int main() {

    //declarando variaveis
    int vetor[10], i, maior, posicaoMaior;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicaoMaior = 0;

    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }

    printf("Vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    printf("Maior elemento: %d\n", maior);
    printf("Posicao do maior elemento: %d\n", posicaoMaior);

    return 0;
}
