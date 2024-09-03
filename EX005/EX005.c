#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float nota1, nota2, media;


    do {
        printf("Digite a 1ª nota (0 a 10): ");
        scanf("%f", &nota1);
        if (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida. Tente novamente.\n");
        }
    } while (nota1 < 0 || nota1 > 10);

    
    do {
        printf("Digite a 2ª nota (0 a 10): ");
        scanf("%f", &nota2);
        if (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida. Tente novamente.\n");
        }
    } while (nota2 < 0 || nota2 > 10);

   
    media = (nota1 + nota2) / 2;


    printf("A média do aluno é: %.2f\n", media);

    return 0;
}
