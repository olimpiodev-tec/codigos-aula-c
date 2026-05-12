#include <stdio.h>
#include <stdbool.h>

int main() {
    // Tipo bool armazena 1 byte
    bool comprouIngressoAntes = false;
    bool comprouIngressoNaHora = false;
    int comprou = 0;

    // Tipo inteiro usado com %d ou %i armazena 4 bytes
    // Então ocorre erro na atribuição do valor bool
    printf("Comprou o ingresso antes? 0->nao, 1->sim: ");
    scanf("%d", &comprou);

    comprouIngressoAntes = comprou;

    printf("Comprou o ingresso na hora? 0->nao, 1->sim: ");
    scanf("%d", &comprou);
    
    comprouIngressoNaHora = comprou;

    if(comprouIngressoAntes || comprouIngressoNaHora) {
        printf("Vai assistir o show !!!");        
    } else {
        printf("Nao vai assistir o show");
    }

    return 0;
}