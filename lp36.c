#include<stdio.h>

int main()
{
    char text[100];
    int a,b,i;

    printf("Enter text: ");
    scanf("%s",text);

    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);

    for(i=0;text[i]!='\0';i++)
    {
        char c=((a*(text[i]-'a')+b)%26)+'a';
        printf("%c",c);
    }

    return 0;
}