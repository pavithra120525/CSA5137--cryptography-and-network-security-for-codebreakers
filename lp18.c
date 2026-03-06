#include<stdio.h>

int main()
{
    printf("DES Key = 56 bits\n");
    printf("Split into two halves:\n");

    printf("Left Half : 28 bits\n");
    printf("Right Half: 28 bits\n\n");

    printf("Subkey structure:\n");

    printf("First 24 bits -> from left half\n");
    printf("Second 24 bits -> from right half\n");

    return 0;
}