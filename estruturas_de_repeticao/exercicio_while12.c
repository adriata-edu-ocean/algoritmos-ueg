//Desenvolva um programa para escrever os números inteiros pares entre 100 e 140. Cada passagem no while deve escrever um número.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int Numero=100;
    printf("Números pares de 100 a 140\n");
    while(Numero<=140){
     if(Numero%2 == 0)
      printf(" %i ", Numero);
     Numero++;}
    return 0;
}