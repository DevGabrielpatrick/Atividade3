#include <stdio.h>

int main() {
    int numero = 101;  // Começa a partir de 101, que é o primeiro número maior que 100
    int contador = 0;  
    
    while (contador < 10) {
        printf("%d\n", numero);
        numero++;
        contador++;
    }

    return 0;
}
