#include <stdio.h>
#include <locale.h>

int main() {
    // Configura o locale para Português do Brasil
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char resposta;

    do {
        float nota1, nota2, media;

        // Leitura da 1ª nota com validação
        do {
            printf("Digite a 1ª nota (0 a 10): ");
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida. Tente novamente.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        // Leitura da 2ª nota com validação
        do {
            printf("Digite a 2ª nota (0 a 10): ");
            scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inválida. Tente novamente.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        // Cálculo da média
        media = (nota1 + nota2) / 2;

        // Impressão da média
        printf("A média do aluno é: %.2f\n", media);

        // Pergunta ao usuário se deseja realizar um novo cálculo
        do {
            printf("NOVO CÁLCULO (S/N)? ");
            scanf(" %c", &resposta);
            resposta = toupper(resposta);  // Converte a resposta para maiúscula para aceitar 's' ou 'S'
        } while (resposta != 'S' && resposta != 'N');  // Validação da resposta

    } while (resposta == 'S');

    return 0;
}
