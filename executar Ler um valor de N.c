#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, i;
	
	printf("digite um valor inteiro positivo (N):");
	scanf("%d", &N);
	
	if (N <=0){
	printf("o valor de N deve ser maior que zero.\n");
	}else {
	printf("Numero de 1 ate %d:\n",N);
	for (i = 1;i <=N; i++){
	printf("%d", i);
	}
	printf("\n");
	} 
	

	 
	return 0;
}
