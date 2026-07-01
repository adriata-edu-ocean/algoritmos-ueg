//Desenvolva um programa para calcular e escrever o produto dos números entre 1 e 6.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int Numero=1, Multiplicacao=1;
    while(Numero<=6){
     Multiplicacao = Numero * Multiplicacao;
     Numero ++;}
    printf("Produtos dos números entre 1 e 6: %i \n", Multiplicacao);
    return 0;
}