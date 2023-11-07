#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("Escolha o produto que deseja: \n");
    printf("1 - Camiseta \n");
    printf("2 - Calça \n");
    printf("3 - Sapato \n");
    scanf("%d", &opcao);
    
    switch (opcao) {
    case 1:
        printf("Camiseta: R$42,00 \n");
        break;
    case 2:
        printf("Calça: R$36,00");
        break;
    case 3:
        printf("Sapato: R$260,00");
    default:
        break;
    }
}