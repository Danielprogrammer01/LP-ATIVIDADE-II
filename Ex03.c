#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "portuguese");

    int i;
    float nota;
    float soma;
    float media;

    for (i = 1; i <= 3; i++) {
        do {
            printf("Digite a %d° nota do aluno: \n", i);
            scanf("%f", &nota);
        
            if (nota < 0 || nota > 10) {
                printf("Nota invalida! \nDigite novamente...\n\n");
                }  
        } while (nota < 0 || nota > 10);
        soma = soma + nota;
        media = soma /3;
    }
    printf("Média do aluno é: %0.2f \n", media);
    
    if (media >= 9){
        printf("Excelente!! Partiu férias!!");
    } else if (media >= 7){
        printf("Bom! Bora de férias!");
    } else if (media >= 5) {
        printf("Razoável! Bora estudar, fml");
    } else if (media < 5) {
        printf("Insuficiente! Nem tenta mano, tranca o curso");
    }
}