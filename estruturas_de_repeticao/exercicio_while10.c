#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char Resposta;
    printf("\nVocê gosta de ler[S/N]: ");
    scanf(" %c", &Resposta);
    while(Resposta != 'S' && Resposta != 'N')
     {
     printf("\nResposta inválida. digite S ou N.");
     printf("\nVocê gosta de ler[S/N]: ");
     scanf(" %c", &Resposta);
     }
    printf("\nResposta válida. Obrigado por participar!");
    return 0;
}