//Desenvolva um programa para calcular e escrever o produto dos números entre 1 e 6.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int Numero=1, Multiplicacao=1;
    do
    {
    Multiplicacao = Numero * Multiplicacao;
    Numero ++;
    }while(Numero<=6);
    printf("\nProduto dos números entre 1 e 6: %i\n\n", Multiplicacao);
    return 0;
}