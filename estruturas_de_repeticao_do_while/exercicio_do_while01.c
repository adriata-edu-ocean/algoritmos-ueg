//Faça um programa para perguntar se o usuário gosta de ler e aceitar apenas S ou N como resposta.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char Resposta;
    do
    {
     printf("\nVocê gosta de ler[S/N]: ");
     scanf(" %c", &Resposta);
     
     if(Resposta!='S' && Resposta!='N')
      printf("\nResposta inválida, digite S ou N.\n");

    } while (Resposta!='S' && Resposta!='N');
    printf("\nResposta válida!!\n");
    return 0;
}