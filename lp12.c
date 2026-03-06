#include<stdio.h>
#include<string.h>

int main()
{
    int key[2][2]={{9,4},{5,7}};
    char text[100];
    int i,a,b;

    printf("Enter plaintext: ");
    scanf("%s",text);

    for(i=0;text[i]!='\0';i+=2)
    {
        a=text[i]-'a';
        b=text[i+1]-'a';

        printf("%c",(key[0][0]*a + key[0][1]*b)%26 + 'A');
        printf("%c",(key[1][0]*a + key[1][1]*b)%26 + 'A');
    }

    return 0;
}