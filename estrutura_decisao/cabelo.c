#include <stdio.h>

int main() {
    float valorCabelo = 0;
    float valorSobrancelha = 0;
    float valorHidratacao = 0;

    printf("Qual valor do corte de cabelo?");
    scanf("%f", &valorCabelo);

    printf("Qual valor da sobrancelha?");
    scanf("%f", &valorSobrancelha);

    printf("Qual valor da hidratacao? ");
    scanf("%f", &valorHidratacao);

    float total = valorCabelo + valorHidratacao + valorSobrancelha;

    if (total < 60) {
        printf("O valor ficou barato R$ %.2f", total);
    } else if (total >= 60 && total < 80) {
        printf("O valor ficou razoavel R$ %.2f", total);
    } else if (total >= 80) {
        printf("O valor ficou caro R$ %.2f", total);
    }



    return 0;
}