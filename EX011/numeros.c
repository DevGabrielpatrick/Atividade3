#include <stdio.h>

int main() {
    int N = 0;

    
    while (N <= 0) {
        printf("Digite um valor para N (maior que zero): ");
        scanf("%d", &N);
        
       
        if (N > 0) {
            for (int i = 1; i <= N; i++) {
                printf("numero\t=\t%d;\n", i);
            }
        } else {
            printf("O valor de N deve ser maior que zero.\n");
        }
    }

    return 0;
}