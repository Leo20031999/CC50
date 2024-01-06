#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[1000];
    char chave[27];
    int i, j;

    printf("Digite a chave de substituicao (26 letras sem repeticao): ");
    scanf("%[^\n]", chave);

    if (strlen(chave) != 26) {
        printf("A chave de substituicao deve ter 26 letras.\n");
        return 1;
    }

    for (i = 0; i < 26; i++) {
        if (!isalpha(chave[i])) {
            printf("A chave deve conter apenas letras.\n");
            return 1;
        }
    }

    printf("Digite o texto a ser cifrado: ");
    scanf(" %[^\n]", texto);

    for (i = 0; texto[i] != '\0'; i++) {
        if (isalpha(texto[i])) {
            if (isupper(texto[i])) {
                for (j = 0; j < 26; j++) {
                    if (texto[i] == 'A' + j) {
                        texto[i] = toupper(chave[j]);
                        break;
                    }
                }
            } else {
                for (j = 0; j < 26; j++) {
                    if (texto[i] == 'a' + j) {
                        texto[i] = tolower(chave[j]);
                        break;
                    }
                }
            }
        }
    }

    printf("Texto cifrado: %s\n", texto);

    return 0;
}

