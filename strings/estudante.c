#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char escola[20];
    char tecnico[20];
    
    printf("\n--Olá, vamos preencher seu cadastro escolar--");
    
    printf("\nQual nome da sua escola do Ensino Médio? ");
    scanf(" %[^\n]", escola);

    printf("Qual nome da sua escola do Ensino Técnico? ");
    scanf(" %[^\n]", tecnico);

    printf("\n--Suas informações acadêmicas são--");
    printf("\nEnsino Médio: %s", escola);
    printf("\nEnsino Técnico: %s", tecnico);

    return 0;
}