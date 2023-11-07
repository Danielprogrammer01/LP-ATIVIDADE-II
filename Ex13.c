#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

    int main(){

        setlocale(LC_ALL, "portuguese");

        int primeiroNumero;
        int segundoNumero;
        int maiorNumero;
        int menorNumero;
        
        printf("Digite o primeiro número: ");
        scanf("%d", &primeiroNumero);

        printf("\nDigite o segundo número: ");
        scanf("%d", &segundoNumero);

        system("cls || clear");

        maiorNumero = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
        menorNumero = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

        printf("Maior número: %d", maiorNumero);
        printf("\nMenor número: %d\n", menorNumero);

        return 0;
    }