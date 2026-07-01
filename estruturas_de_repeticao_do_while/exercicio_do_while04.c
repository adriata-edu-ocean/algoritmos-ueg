//Desenvolva um programa que leia um número inteiro, calcule e mostre seu fatorial. Onde F(n) = 1 * 2 * 3 * ... * n-1 * n
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int Numero, Contador=1, Multiplicacao=1;
    printf("Digite qualquer número inteiro: \n");
    scanf(" %i", &Numero);
    do
    {
     Multiplicacao= Contador * Multiplicacao;
     Contador ++;
    } while (Contador<=Numero);
    printf("Fatorial de %i: %i", Numero, Multiplicacao);
    return 0;
}