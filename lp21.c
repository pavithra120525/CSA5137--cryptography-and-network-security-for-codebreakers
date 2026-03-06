#include<stdio.h>
#include<string.h>

int main()
{
    char msg[100];
    int block=8,i,len;

    printf("Enter plaintext: ");
    scanf("%s",msg);

    len=strlen(msg);

    msg[len]='1';
    len++;

    while(len%block!=0)
    {
        msg[len]='0';
        len++;
    }

    msg[len]='\0';

    printf("Padded message: %s",msg);

    return 0;
}