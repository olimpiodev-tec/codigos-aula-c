#include <stdio.h>

int main() {
    int dia = 0;

    printf("Qual dia da semana? 1->dom, 7->sab");
    scanf("%i", &dia);

    switch (dia) {
        case 1:
            printf("Domingou !!!");
            break;
        case 2:
            printf("Segundona, vamos pra cima");
            break;
        case 3:
            printf("Terca feira, vamos que vamos");
            break;
        case 4:
            printf("Meio da semana");    
            break;
        default:
            printf("Dia nao encontrado");
            break;
    }

    return 0;
}