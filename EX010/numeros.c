#include <stdio.h>

int main() {

    int N;

    printf("Digite um valor para N (maior que zero): ");
    scanf("%d", &N);

  
    for (int i = 1; i <= N; i++) {
        printf("numero\t=\t%d;\n", i);
    }

    return 0;
}
