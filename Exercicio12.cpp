#include <stdio.h>

int main() {

    //declarando variaveis
    float valores[5], maior, menor, soma = 0, media;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    maior = valores[0];
    menor = valores[0];

    printf("Valores lidos:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f\n", valores[i]);

        soma = soma + valores[i];

        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    media = soma / 5;

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}
