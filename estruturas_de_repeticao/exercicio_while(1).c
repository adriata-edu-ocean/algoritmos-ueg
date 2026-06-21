//Desenvolva um programa para ler vários números inteiros enquanto não for digitado o número 0.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int Numero;
	printf("Digite números inteiro ou 0 para sair: \n");
	scanf("%i", &Numero);
	while(Numero != 0)
	{
	scanf("%i", &Numero);
	}
	printf("Fim do Laço");	
}