#include<stdio.h>

int modInverse(int a)
{
    int x;
    for(x=1;x<26;x++)
    {
        if((a*x)%26==1)
        return x;
    }
    return -1;
}

int main()
{
    char cipher[100];
    int a=7,b=25;
    int a_inv,i;

    printf("Enter ciphertext: ");
    scanf("%s",cipher);

    a_inv = modInverse(a);

    for(i=0; cipher[i]!='\0'; i++)
    {
        cipher[i] = (((a_inv*((cipher[i]-'A')-b+26))%26)+'A');
    }

    printf("Decrypted text: %s",cipher);

    return 0;
}