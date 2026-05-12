#include <stdio.h>

int main() {
    int dia = 0;

    printf("Qual dia da semana? (dom->0, sab->6)");
    scanf("%i", &dia);

    if (dia == 0) {
        printf("Domingo so alegria, de boa na lagou");
    } else if (dia == 1) {
        printf("Segundona, bora trabalhar :)");
    } else if (dia == 2) {
        printf("Terca, vamos pra cima");
    } else if (dia == 3) {
        printf("Quarta, vai que vai");
    } else if (dia == 4) {
        printf("Quinta, estamos quase la");
    } else if (dia == 5) {
        printf("So felicidade");
    } else if (dia == 6) {
        printf("Dia do faxinao");
    } else {
        printf("Dia nao encontrado");
    }

    return 0;
}