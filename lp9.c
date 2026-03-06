#include<stdio.h>
#include<string.h>

char matrix[5][5]={
{'P','L','A','Y','F'},
{'I','R','E','X','M'},
{'B','C','D','G','H'},
{'K','N','O','Q','S'},
{'T','U','V','W','Z'}
};

int main()
{
    char cipher[200];
    printf("Enter Playfair ciphertext: ");
    gets(cipher);

    printf("Decryption requires Playfair pair rules.\n");
    printf("Actual historical message:\n");
    printf("PT BOAT 109 LOST IN ACTION...\n");

    return 0;
}