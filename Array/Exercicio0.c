#include <stdio.h>

int main() {
    int l = 0, s = 0, w = 1, i = 0; 
    char texto[1000];
    printf("Texto: ");
    scanf("%[^\n]", texto); 
    for (i = 0; texto[i] != '\0'; i++) {
        if ((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122)) {
            l++;
        }
        if (texto[i] == 33 || texto[i] == 46 || texto[i] == 63) {
            s++;
        }
        if (texto[i] == 32) {
            w++;
        }
    }
    if (w == 0) {
        return -1; 
    }  
    double L = ((double)l / w) * 100; 
    double S = ((double)s / w) * 100;

    int ind = 0.0588 * L - 0.296 * S - 15.8;

    if (ind < 1) {
        printf("Before Grade 1\n");
    } else if(ind > 16){
        printf("Grade 16+");
    }else{
    	printf("Grade %d\n", ind);
	}

    return 0;
}

