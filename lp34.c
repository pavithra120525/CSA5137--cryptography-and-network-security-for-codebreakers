#include<stdio.h>
#include<string.h>

int main()
{
    char msg[100];
    int block=8,i;

    printf("Enter message: ");
    scanf("%s",msg);

    int len=strlen(msg);

    msg[len++]='1';

    while(len%block!=0)
        msg[len++]='0';

    msg[len]='\0';

    printf("Padded message: %s",msg);

    return 0;
}