#include <stdio.h>

int main() {

    //declarando variaveis
    float vetor[10], somaPositivos = 0;
    int i, negativos = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0) {
            negativos++;
        } else if (vetor[i] > 0) {
            somaPositivos = somaPositivos + vetor[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}
