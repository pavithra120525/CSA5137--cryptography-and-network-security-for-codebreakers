#include<stdio.h>

int main()
{
    printf("Changing only e and d but keeping same n is NOT safe.\n");
    printf("If attacker knows old private key,\n");
    printf("they can compute f(n).\n");
    printf("Then new private key can also be calculated.\n");

    return 0;
}