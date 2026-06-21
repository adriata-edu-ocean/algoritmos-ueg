#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float Nota=0, Media=0, Soma=0;
    int Contador=0;
    
    printf("Digite as notas ou -1 para sair:\n"); 
    scanf(" %f", &Nota);
    
    while(Nota != -1)
    {
        Soma = Soma + Nota;
        Contador++;        
        scanf(" %f", &Nota); 
    }
    
    if(Contador == 0)
     printf("Nenhuma nota foi informada!!\n");
    else
    {
     Media = Soma / Contador;
     printf("Média das notas digitadas: %.1f\n", Media);
    }
    
    return 0;
}