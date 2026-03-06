#include<stdio.h>
#include<string.h>

int main()
{
    char text[50];
    int key[50];
    int i,n;

    printf("Enter plaintext: ");
    scanf("%s",text);

    n=strlen(text);

    printf("Enter key stream:\n");

    for(i=0;i<n;i++)
        scanf("%d",&key[i]);

    printf("Ciphertext: ");

    for(i=0;i<n;i++)
        printf("%c",((text[i]-'a'+key[i])%26)+'a');

    return 0;
}