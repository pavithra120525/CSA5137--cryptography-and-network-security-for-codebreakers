#include<stdio.h>
#include<string.h>

int main()
{
    char text[200];
    int freq[26]={0};
    int i;

    printf("Enter ciphertext: ");
    scanf("%s",text);

    for(i=0;text[i]!='\0';i++)
        freq[text[i]-'A']++;

    for(i=0;i<26;i++)
        printf("%c : %d\n",'A'+i,freq[i]);

    return 0;
}