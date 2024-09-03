#include <stdio.h>

int main() {
    int totalMercadorias;
    float valorMercadoria, valorTotal = 0, media;
    char resposta;
    int i = 1;
    
    printf("Digite o numero total de mercadorias no estoque: ");
    scanf("%d", &totalMercadorias);

    // Corrigido o loop for
    for (i = 1; i <= totalMercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valorMercadoria);
        valorTotal += valorMercadoria;
    }

    media = valorTotal / totalMercadorias;

    printf("O valor total em estoque e: R$ %.2f\n", valorTotal);
    printf("A media do valor das mercadorias e: R$ %.2f\n", media);
    printf("O total de mercadorias em estoque e: %d\n", totalMercadorias);

    printf("Mais mercadorias (S/N)? ");
    scanf(" %c", &resposta);

    while (resposta == 'S' || resposta == 's') {
        totalMercadorias++; // Incrementar o número total de mercadorias
        printf("Digite o valor da mercadoria %d: ", totalMercadorias);
        scanf("%f", &valorMercadoria);
        valorTotal += valorMercadoria;

        media = valorTotal / totalMercadorias;

        printf("O valor total em estoque e: R$ %.2f\n", valorTotal);
        printf("A media do valor das mercadorias e: R$ %.2f\n", media);
        printf("O total de mercadorias em estoque e: %d\n", totalMercadorias);

        printf("Mais mercadorias (S/N)? ");
        scanf(" %c", &resposta);
    }

    return 0;
}
