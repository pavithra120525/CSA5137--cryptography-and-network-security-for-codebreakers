#include <stdio.h>
#include <ctype.h>

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    char text[100];
    int a, b, i;

    printf("Enter plaintext: ");
    scanf("%s", text);

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    if(gcd(a,26) != 1) {
        printf("Invalid 'a' value. Must be coprime with 26.");
        return 0;
    }

    for(i=0;text[i]!='\0';i++) {
        text[i] = ((a*(toupper(text[i])-'A') + b) % 26) + 'A';
    }

    printf("Ciphertext: %s", text);
    return 0;
}