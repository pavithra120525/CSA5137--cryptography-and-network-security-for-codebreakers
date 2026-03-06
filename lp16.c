#include<stdio.h>
#include<string.h>

int main()
{
    char cipher[200];
    int freq[26]={0};
    int i;

    printf("Enter ciphertext: ");
    scanf("%s",cipher);

    for(i=0; cipher[i]!='\0'; i++)
    {
        if(cipher[i]>='A' && cipher[i]<='Z')
            freq[cipher[i]-'A']++;
    }

    printf("\nLetter Frequency:\n");
    for(i=0;i<26;i++)
    {
        printf("%c : %d\n",'A'+i,freq[i]);
    }

    printf("\nTop 10 possible plaintext shifts:\n");

    for(int key=0; key<10; key++)
    {
        printf("Key %d : ",key);

        for(i=0; cipher[i]!='\0'; i++)
        {
            printf("%c",((cipher[i]-'A'-key+26)%26)+'A');
        }
        printf("\n");
    }

    return 0;
}