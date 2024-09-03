#include <stdio.h>

int main() {
    int soma = 0;
    int contagem = 0;
    float media;

    
    for (int i = 15; i <= 100; i++) {
        printf("%d\t+\t%d;\n=\t%d",i,contagem,soma);
        soma += i;
        contagem++;
    }

   
    media = (float)soma / contagem;

  
    printf("\nA media aritmetica dos numeros entre 15 e 100 e: %.2f\n", media);

    return 0;
}
