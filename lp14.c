#include<stdio.h>
#include<string.h>

int main()
{
    char text[]="SENDMOREMONEY";
    int key[]={9,0,1,7,23,15,21,14,11,11,2,8,9};
    int i;

    for(i=0;i<13;i++)
    {
        printf("%c",((text[i]-'A'+key[i])%26)+'A');
    }

    return 0;
}