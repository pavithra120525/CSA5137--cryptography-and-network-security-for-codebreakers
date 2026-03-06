#include<stdio.h>

int main()
{
    int plaintext[3]={1,2,4};
    int key=0b0111111101;
    int counter=0;
    int i;

    for(i=0;i<3;i++)
    {
        int keystream = counter ^ key;
        int cipher = plaintext[i] ^ keystream;

        printf("Cipher block %d = %d\n",i+1,cipher);

        counter++;
    }

    return 0;
}