#include<stdio.h>

int main()
{
    unsigned long plaintext,key,cipher;

    printf("Enter plaintext: ");
    scanf("%lu",&plaintext);

    printf("Enter key: ");
    scanf("%lu",&key);

    cipher = plaintext ^ key;

    printf("Ciphertext = %lu\n",cipher);

    printf("Decrypted = %lu\n",cipher ^ key);

    return 0;
}