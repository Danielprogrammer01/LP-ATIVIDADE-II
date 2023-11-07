/*Exercício 12: 
Desenvolva um programa que solicite ao usuário uma quantidade ]
de notas e peça para digitar cada nota. 
O programa deve calcular e exibir a média das notas digitadas. 
Utilize o for para repetir o processo de solicitação das notas.*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

float nota;
int contador = 0, i;
float soma, media;

for (i = 1; i <= 4; i++)
{
printf("Insira a %d° nota: \n", i);
scanf("%f", &nota);

contador++;
soma += nota;

}

media = soma/contador;
printf("A média dos valores é %.2f \n", media);


return 0;
}