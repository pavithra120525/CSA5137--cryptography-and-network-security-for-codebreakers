#include<stdio.h>

int main()
{
    unsigned int L = 0x00;
    unsigned int K1,K2;

    K1 = L << 1;

    if(L & 0x80)
        K1 ^= 0x1B;

    K2 = K1 << 1;

    if(K1 & 0x80)
        K2 ^= 0x1B;

    printf("Subkey K1 = %u\n",K1);
    printf("Subkey K2 = %u\n",K2);

    return 0;
}