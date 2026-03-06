#include<stdio.h>
#include<string.h>

int main()
{
    char plaintext[100];
    char iv='A';
    int i;

    printf("Enter plaintext: ");
    scanf("%s",plaintext);

    printf("CBC Encryption (simplified)\n");

    for(i=0; plaintext[i]!='\0'; i++)
    {
        char cipher = (plaintext[i] ^ iv);
        iv = cipher;

        printf("%c",cipher);
    }

    return 0;
}