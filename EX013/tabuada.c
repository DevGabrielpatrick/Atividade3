#include <stdio.h>

int main() {
    int num;

  
    do {
        printf("Digite um valor inteiro entre 1 e 10: ");
        scanf("%d", &num);

        if (num < 1 || num > 10) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (num < 1 || num > 10);

   
    printf("Tabuada do %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
