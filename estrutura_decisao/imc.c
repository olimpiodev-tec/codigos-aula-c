#include <stdio.h>

int main()
{
    int peso = 0;
    float altura = 0;

    printf("Ola, vamos calcular o IMC\n");

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    printf("Qual seu peso? ");
    scanf("%i", &peso);

    float resultado = peso / (altura * altura);

    if (resultado < 18.5) {
        printf("Classificacao: Abaixo do peso, IMC %.2f", resultado);
    } else if (resultado >= 18.5 && resultado < 24.9) {
        printf("\nClassificacao: Peso normal, IMC %.2f", resultado);
    } else if (resultado >= 25.0 && resultado < 29.9) {
        printf("\nClassificacao: Sobrepeso, IMC %.2f", resultado);
    } else if (resultado >= 30.0 && resultado < 34.9) {
        printf("\nClassificacao: Obesidade grau 1, IMC %.2f", resultado);
    } else if (resultado >= 35.0 && resultado < 39.9) {
        printf("\nClassificacao: Obesidade grau 2, IMC %.2f", resultado);
    } else {
        printf("\nClassificacao: Obesidade grau 3 (morbida), IMC %.2f", resultado);
    }

    return 0;
}