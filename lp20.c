#include<stdio.h>

int main()
{
    printf("ECB Mode:\n");
    printf("Error in C1 affects only P1\n\n");

    printf("CBC Mode:\n");
    printf("Error in C1 affects P1 and P2\n\n");

    printf("Answer:\n");
    printf("a) Blocks beyond P2 are NOT affected\n");
    printf("b) Bit error in P1 affects C1 and C2\n");

    return 0;
}