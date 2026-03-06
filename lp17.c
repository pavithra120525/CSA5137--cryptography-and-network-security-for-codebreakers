#include<stdio.h>

int main()
{
    int shift[16]={1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};

    printf("DES Decryption Key Order:\n");

    for(int i=15;i>=0;i--)
    {
        printf("K%d shift = %d\n",i+1,shift[i]);
    }

    return 0;
}