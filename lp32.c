#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int k1,k2;

    srand(time(0));

    k1 = rand()%100;
    k2 = rand()%100;

    printf("Signature 1 random k = %d\n",k1);
    printf("Signature 2 random k = %d\n",k2);

    printf("Different signatures produced\n");

    return 0;
}