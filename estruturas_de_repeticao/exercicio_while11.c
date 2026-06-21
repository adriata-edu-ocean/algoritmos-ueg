//Faça um programa para perguntar a nota de um aluno na 1a VA e só aceitar notas de 0 a 10, inclusive. quando for digitada a nota correta o programa deve mostrar quanto a aluno precisará tirar na 2a VA para ser aprovado.
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float Nota, Media;

    printf("\nDigite sua nota da 1a VA: ");
    scanf(" %f", &Nota);
    while(Nota < 0 || Nota > 10)
     {
     printf("\nNota inválida!");
     printf("\nDigite sua nota da 1a VA: ");
     scanf(" %f", &Nota);
     }
    Media = (30.0 - (Nota * 2.0)) / 3.0;
    printf("\nVocê precisará tirar %.1f na 2a VA para passar de ano.", Media);
    return 0;
}