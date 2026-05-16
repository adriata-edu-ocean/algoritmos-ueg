//Atividade 1

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int Numero, Contador;
    Contador = 0;
	printf("Digite números inteiro ou 0 para sair: \n");
	scanf("%i", &Numero);
	while(Numero != 0)
	{
    Contador = Contador + 1;
	scanf("%i", &Numero);
	}
	printf("Foram digitados %i números\n", Contador);
	return 0;
}