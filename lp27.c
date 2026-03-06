#include<stdio.h>

int main()
{
    printf("Encrypting each character separately is insecure.\n");
    printf("Attacker builds lookup table of 26 encryptions.\n");
    printf("Then ciphertext letters can be easily reversed.\n");

    return 0;
}