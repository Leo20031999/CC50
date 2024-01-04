#include <stdio.h>
int main(){
	int tam = 0;
	int i=0,j=0;

	do{
		printf("Tamanho: ");
		scanf("%d", &tam);
	}while(tam<1);
	
	for(i = 0; i <= tam; i++){
		int spaces = tam - i;
		int k = 0;
		for(k=0;k<spaces;k++){
			printf(" ");
		}
		for(j = 0; j < i; j++){
			printf("#");
		}
		printf("\n");
	}
}
