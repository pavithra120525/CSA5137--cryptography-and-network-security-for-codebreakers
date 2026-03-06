#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char plain[100], key[27], cipher[100];
    int i;

    printf("Enter plaintext (uppercase): ");
    scanf("%s", plain);

    printf("Enter 26-letter key: ");
    scanf("%s", key);

    for(i = 0; plain[i] != '\0'; i++) {
        if(isalpha(plain[i]))
            cipher[i] = key[plain[i] - 'A'];
        else
            cipher[i] = plain[i];
    }
    cipher[i] = '\0';

    printf("Ciphertext: %s", cipher);
    return 0;
}