#include<stdio.h>
#include<string.h>

int main()
{
    char cipher[100];
    int key,i;

    printf("Enter ciphertext: ");
    scanf("%s",cipher);

    for(key=0; key<26; key++)
    {
        printf("\nKey %d: ",key);

        for(i=0; cipher[i]!='\0'; i++)
        {
            printf("%c",((cipher[i]-'A'-key+26)%26)+'A');
        }
    }

    return 0;
}