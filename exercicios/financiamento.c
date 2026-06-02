#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const float TAXA_JUROS_VEICULOS = 1.5;
    const float TAXA_JUROS_IMOVEIS = 0.5;
    char nome[30];
    int opcaoFinanciamento = 0;
    int opcaoVeiculo = 0;
    int opcaoImoveis = 0;
    int qtdeParcelas = 0;
    float valorVeiculo = 0;
    float valorImovel = 0;
    float totalJurosVeiculos = 0;
    float totalJurosImoveis = 0;
    float totalJurosVeiculoValor = 0;
    float totalJurosImovelValor = 0;

    printf("-----Olá, somos a Finantech e vamos ajudar você a conquistar seu sonho-----");
    printf("\nPara começar, qual seu nome?");
    scanf("%s", nome);

    do {
        printf("\n\nTrabalhamos com os financiamentos abaixo");
        printf("\n1->Veículos\n2->Imóveis\n0->Finalizar, qual opção você deseja: ");
        scanf("%i", &opcaoFinanciamento);

        if (opcaoFinanciamento == 1) {
            printf("\nLegal %s, você quer comprar um veículo", nome);
            printf("\n\nEscolha uma opção:\n10->Caminhão(100 até 200 parcelas)\n20->Carros(6 até 48 parcelas)\n30->Motos(3 até 24 parcelas): ");
            scanf("%i", &opcaoVeiculo);
            printf("\n\nAgora em quantas parcelas você deseja pagar o veículo? ");
            scanf("%i", &qtdeParcelas);

            if (opcaoVeiculo == 10) {
                // Caminhão
                if (qtdeParcelas < 100 || qtdeParcelas > 200) {
                    printf("\nQtde de parcelas inválidas\n");                    
                } else {
                    totalJurosVeiculos = qtdeParcelas * TAXA_JUROS_VEICULOS;
                    totalJurosVeiculoValor = 
                }
            } else if (opcaoVeiculo == 20) {
                // Carros
                if (qtdeParcelas < 6 || qtdeParcelas > 48) {
                    printf("\nQtde de parcelas inválidas\n");                    
                }
            } else if (opcaoVeiculo == 30) {
                // Motos
                if (qtdeParcelas < 3 || qtdeParcelas > 24) {
                    printf("\nQtde de parcelas inválidas\n");                   
                }
            }
        } else {
            printf("\nLegal %s, você quer comprar um imóvel", nome);
        }
    } while (opcaoFinanciamento != 0);

    printf("\n-----Fim-----");

    return 0;
}