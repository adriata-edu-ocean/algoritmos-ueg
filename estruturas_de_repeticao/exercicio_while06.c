//Desenvolva um programa para ler a quantidade e o preço unitário de vários produtos vendidos, enquanto não for digitado 0 na quantidade. Quando o programa sair do laço deverá calcular e escrever o total da venda.
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
    return 0;
}