#include <stdio.h>

int main() {
    float valorLancheRodeio = 0;
    float valorBatataGrande = 0;
    float valorRefriCoca = 0;
    float valorSobremessa = 0;

    printf("Qual o valor do lanche?");
    scanf("%f", &valorLancheRodeio);

    printf("Qual o valor da Batata?");
    scanf("%f", &valorBatataGrande);

    printf("Qual o valor refri?");
    scanf("%f", &valorRefriCoca);

    printf("Qual o valor da sobremessa");
    scanf("%f", &valorSobremessa);

    float total = valorLancheRodeio + valorRefriCoca + valorBatataGrande + valorSobremessa;
    
    if (total < 40) {
        printf("O valor ficou barato R$ %.2f", total);
    } else if (total >= 40 && total <= 55) {
        printf("O valor ficou razoavel R$ %.2f", total);
    } else if (total > 55) {
        printf("O valor ficou caro R$ %.2f", total);
    }



    return 0;
}