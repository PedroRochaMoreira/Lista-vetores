#include <stdio.h>

int main() {

    //declarando variaveis
    float valores[5];
    int i, posicaoMaior = 0, posicaoMenor = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    for (i = 1; i < 5; i++) {
        if (valores[i] > valores[posicaoMaior]) {
            posicaoMaior = i;
        }
        if (valores[i] < valores[posicaoMenor]) {
            posicaoMenor = i;
        }
    }

    printf("O maior valor (%.2f) esta na posicao %d\n", valores[posicaoMaior], posicaoMaior);
    printf("O menor valor (%.2f) esta na posicao %d\n", valores[posicaoMenor], posicaoMenor);

    return 0;
}
