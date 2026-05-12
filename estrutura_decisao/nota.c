#include <stdio.h>

int main() {
    float nota = 0;

    printf("Qual sua nota?");
    scanf("%f", &nota);

    if (nota > 6.9) {
        printf("Voce esta aprovado com nota %.2f", nota);
    } else {
        printf("Voce esta reprovado com nota %.2f", nota);
    }

    return 0;
}