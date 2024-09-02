#include <stdio.h>

int main() {
    int n;

    
    printf("Digite o valor de n: ");
    scanf("%d", &n);

  
    for (int i = n; i > 0; i--) {
        printf("\n\t");
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        
    }

    return 0;
}
