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
        
        printf("Digite o primeiro n�mero: ");
        scanf("%d", &primeiroNumero);

        printf("\nDigite o segundo n�mero: ");
        scanf("%d", &segundoNumero);

        system("cls || clear");

        maiorNumero = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
        menorNumero = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

        printf("Maior n�mero: %d", maiorNumero);
        printf("\nMenor n�mero: %d\n", menorNumero);

        return 0;
    }