#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int N1, Soma;
    Soma = 0;
    N1 = 3;
    while(N1>=3 && N1<=10)
    {
     Soma = Soma + N1; 
     N1 ++;
    } 
    printf("Soma dos números entre 3 e 10: %i\n", Soma);
    return 0;
}