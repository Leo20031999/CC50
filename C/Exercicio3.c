#include <stdio.h>

int main(){
	int troco = 0;
	int moeda = 0;
	int max = 25;
	do{
		printf("Troco(em centavos): ");
		scanf("%d", &troco);
	}while(troco<0);
	
	while(troco > 0){
		if(troco > max){
			troco -= max;
			moeda += 1;
		}
		if(troco < max){
			troco -= 10;
			max = 10;
			moeda +=1;
		}
		
		if(troco < max && max == 10){
			troco -= 5;
			max = 5;
			moeda += 1;
		}
		
		if(troco < max && max == 5){
			troco -= 1;
			moeda += 1;
		}
		
	}
	
	printf("Qtd moedas: %d", moeda);
	return 0;
}
