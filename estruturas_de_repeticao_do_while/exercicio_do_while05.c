//Desenvolva um programa para ler a nota de vários alunos, enquanto não for digitada a nota igual a -1. Depois o algoritmo deve calcular e escrever a média das notas digitadas.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float Numero, Soma = 0, Media = 0;
    int Contador = 0; 
    
    printf("Digite as notas ou -1 para sair:\n");
    do
    {
     scanf(" %f", &Numero);
     if(Numero != -1) {
      Soma = Soma + Numero;
      Contador++;}
    } while(Numero != -1);
    if(Contador > 0) {
        Media = Soma / Contador;
    }
    printf("Média das notas digitadas: %.1f\n", Media);
    return 0;
}