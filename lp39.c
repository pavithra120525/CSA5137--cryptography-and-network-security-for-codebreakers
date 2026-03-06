#include<stdio.h>
#include<string.h>

int main()
{
    char text[100];
    int key,i;

    printf("Enter ciphertext: ");
    scanf("%s",text);

    for(key=0;key<10;key++)
    {
        printf("Key %d: ",key);

        for(i=0;text[i]!='\0';i++)
            printf("%c",((text[i]-'A'-key+26)%26)+'A');

        printf("\n");
    }

    return 0;
}