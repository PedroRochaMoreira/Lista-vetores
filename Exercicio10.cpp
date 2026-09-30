#include <stdio.h>

int main() {

    //declarando variaveis
    float notas[15], soma = 0, media;
    int i;

    for (i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        soma = soma + notas[i];
    }

    media = soma / 15;

    printf("Media geral da turma: %.2f\n", media);

    return 0;
}
