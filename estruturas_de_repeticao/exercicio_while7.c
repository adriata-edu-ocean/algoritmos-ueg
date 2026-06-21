//Desenvolva um programa que leia 6 números inteiros e imprima, ao final, a soma dos positivos e a quantidade de números negativos digitados.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int Numero, Positivo=0, Negativo=0;
    int Contador = 0;
    printf("Digite seis números:\n");
    while(Contador < 6)
        {
        scanf("%i", &Numero);
        if(Numero < 0)
            Negativo ++; 
        else
         if(Numero > 0)
            Positivo += Numero;
            Contador++;
        }
    printf("Soma dos números positivos: %i\n", Positivo);
    printf("Quantidade de números negativos: %i\n", Negativo);
    return 0;
}