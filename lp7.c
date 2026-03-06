#include<stdio.h>

int main()
{
    char cipher[]="53‡‡†305))6*;";
    int i;

    for(i=0; cipher[i]!='\0'; i++)
    {
        switch(cipher[i])
        {
            case '5': printf("A"); break;
            case '3': printf("G"); break;
            case '‡': printf("O"); break;
            case '†': printf("D"); break;
            case '0': printf("L"); break;
            case ')': printf("S"); break;
            case '6': printf("I"); break;
            case '*': printf("N"); break;
            case ';': printf("T"); break;
            default: printf(" ");
        }
    }

    return 0;
}