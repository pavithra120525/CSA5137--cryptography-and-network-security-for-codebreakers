#include <stdio.h>

int main()
{
    int X,T;

    printf("Enter message block X: ");
    scanf("%d",&X);

    printf("Enter MAC value T: ");
    scanf("%d",&T);

    int second = X ^ T;

    printf("Second block (X XOR T) = %d\n",second);

    printf("Two block message = X || (X XOR T)\n");

    return 0;
}