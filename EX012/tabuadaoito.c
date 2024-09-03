#include <stdio.h>

int main() {
    int num = 8;

    printf("Tabuada do 8:\n");

   
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
