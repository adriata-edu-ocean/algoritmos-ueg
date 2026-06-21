//Faça um programa para ler a idade de uma pessoa e só aceitar idades maiores que0.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    printf("Digite sua idade: \n");
    scanf(" %i", &i);
    

    while(i <= 0)
    {
        printf("\nIdade inválida.\n");
        printf("\nDigite sua idade novamente: \n");
        scanf(" %i", &i);
    }
    printf("\nIdade válida.\n");
    return 0;
}