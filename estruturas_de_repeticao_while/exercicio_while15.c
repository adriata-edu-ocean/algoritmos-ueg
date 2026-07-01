//Desenvolva um programa para ler um número inteiro qualquer, calcular e escrever o seu fatorial. Onde F(n) = 1 * 2 * 3 * ... * n-1 * n
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Numero, Multiplicacao = 1, Contador = 1;
    printf("Digite o número para calcular o fatorial: ");
    scanf(" %i", &Numero);
    while (Contador <= Numero) {
     Multiplicacao = Multiplicacao * Contador;
     Contador++;
    }
    printf("\nFatorial: %i\n", Multiplicacao);
    return 0;
}