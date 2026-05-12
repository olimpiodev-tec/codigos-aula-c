#include <stdio.h>

int main()
{
    float notas[4];
    float total = 0;
    float media = 0;

    // Coletando as notas do usuário
    for (int i=0; i < 4; i++) {        
        printf("\nQual a Nota do aluno? ");
        scanf("%f", &notas[i]);
    }

    // Calculando a soma das notas
    for (int i=0; i < 4; i++) {                
        total += notas[i];
    }

    media = total / 4;

    printf("A media das notas eh: %.2f", media);

    return 0;
}