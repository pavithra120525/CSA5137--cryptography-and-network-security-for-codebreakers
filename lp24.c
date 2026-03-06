#include<stdio.h>

int main()
{
    int e=31,phi=3480,d=1;

    while((e*d)%phi!=1)
        d++;

    printf("Private key d = %d",d);

    return 0;
}