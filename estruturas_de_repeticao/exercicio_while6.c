#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float Quantidade, Preco, Total=0, Soma=0;

    printf("Quantidade: ");
    scanf(" %f", &Quantidade);

    while(Quantidade != 0)
    {
     printf("Preço: ");
     scanf(" %f", &Preco);
     Soma = Quantidade * Preco;
     Total = Total + Soma;
     printf("\nQuantidade: ");
     scanf(" %f", &Quantidade);
    }
    printf("Total da Nota: R$ %.2f", Total);
}