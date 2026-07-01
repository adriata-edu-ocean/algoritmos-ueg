//Desenvolva um programa que escreve os números múltiplos de 5 entre 0 e 100.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int Numero=0;
    printf("\nNúmeros múltiplos de entre 0 e 100: ");
    do
    {
     if(Numero%5 == 0)
      printf(" %i", Numero);
     Numero ++;
    } while (Numero <=100);
    printf("\n");
    return 0;
}