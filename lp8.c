#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char plain[100], cipher[100];
    char key[]="CIPHERABDFGJKLMNOQSTUVWXYZ";
    int i;

    printf("Enter plaintext: ");
    scanf("%s",plain);

    for(i=0; plain[i]!='\0'; i++)
    {
        cipher[i]=key[toupper(plain[i])-'A'];
    }
    cipher[i]='\0';

    printf("Ciphertext: %s",cipher);

    return 0;
}