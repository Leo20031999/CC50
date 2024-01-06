#include <stdio.h>
int main(){
	int start = 0;
	int end = 0;
	int pop = 0;
	int years = 0;
	do{
		printf("Start size: ");
		scanf("%d", &start);
	}while(start < 9);
	
	do{
		printf("End size: ");
		scanf("%d", &end);
	}while(end < start);
	
	while(pop <= end){
		pop = start;
		int birth = start/3;
		int death = start/4;
		pop = pop + birth - death;	
		years += 1;
		if(pop >= end){
			break;
		}
	}
	printf("Years: %d", years);
	
	
}
