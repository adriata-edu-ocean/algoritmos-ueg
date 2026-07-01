//Faça um programa para ler a idade de uma pessoa e só aceitar idades maiores que 0 e menores que 150.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    printf("\nDigite sua idade: ");
    scanf(" %i", &i);
    

    while(i <= 0 || i > 150)
    {
        if(i <= 0)
        {
            printf("\nErro: Idade menor que zero. \n");
        }
        else
        {
            printf("\nErro: Idade maior que 150. \n");
        }
        printf("\nDigite sua idade: ");
        scanf(" %i", &i);
    }
    printf("\nIdade aceita.\n");
    return 0;
}