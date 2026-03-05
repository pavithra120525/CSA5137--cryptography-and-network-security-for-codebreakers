#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char text[100];
    int k, i;

    printf("Enter plaintext: ");
    scanf("%s", text);

    printf("Enter key (1-25): ");
    scanf("%d", &k);

    for(i = 0; text[i] != '\0'; i++) {
        if(isalpha(text[i])) {
            text[i] = ((toupper(text[i]) - 'A' + k) % 26) + 'A';
        }
    }

    printf("Ciphertext: %s", text);
    return 0;
}