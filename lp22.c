#include<stdio.h>

int main()
{
    int plaintext=0b0000000100100011;
    int key=0b0111111101;
    int iv=0b10101010;

    int cipher = plaintext ^ iv ^ key;

    printf("Ciphertext: %d\n",cipher);

    int decrypted = cipher ^ key ^ iv;

    printf("Decrypted plaintext: %d\n",decrypted);

    return 0;
}