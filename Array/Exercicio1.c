#include <stdio.h>

#define SHIFT 3 

int main() {
    char texto[1000];
    printf("Digite o texto a ser cifrado: ");
    scanf("%[^\n]", texto);

    int deslocamento = SHIFT;
    printf("Deslocamento: ");
    scanf("%d", &deslocamento);

	int i;
    for (i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        if (c >= 'A' && c <= 'Z') {
            texto[i] = ((c - 'A') + deslocamento) % 26 + 'A';
        } else if (c >= 'a' && c <= 'z') {
            texto[i] = ((c - 'a') + deslocamento) % 26 + 'a';
        }
    }

    printf("Texto cifrado: %s\n", texto);

    return 0;
}

