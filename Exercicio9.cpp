#include <stdio.h>

int main() {

    //declarando variaveis
    int valores[6], i;

    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o valor par %d: ", i + 1);
            scanf("%d", &valores[i]);

            if (valores[i] % 2 != 0) {
                printf("Valor invalido, digite um numero par\n");
            }
        } while (valores[i] % 2 != 0);
    }

    printf("Valores na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
