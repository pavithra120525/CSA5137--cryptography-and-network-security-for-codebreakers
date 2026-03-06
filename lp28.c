#include <stdio.h>
#include <math.h>

long long power(long long a,long long b,long long mod)
{
    long long result=1;
    for(int i=0;i<b;i++)
    {
        result=(result*a)%mod;
    }
    return result;
}

int main()
{
    long long q,a;
    long long x,y;
    long long A,B;
    long long keyA,keyB;

    printf("Enter prime number q: ");
    scanf("%lld",&q);

    printf("Enter primitive root a: ");
    scanf("%lld",&a);

    printf("Enter Alice secret key: ");
    scanf("%lld",&x);

    printf("Enter Bob secret key: ");
    scanf("%lld",&y);

    A = power(a,x,q);
    B = power(a,y,q);

    printf("\nAlice sends: %lld",A);
    printf("\nBob sends: %lld",B);

    keyA = power(B,x,q);
    keyB = power(A,y,q);

    printf("\n\nShared key computed by Alice: %lld",keyA);
    printf("\nShared key computed by Bob: %lld",keyB);

    return 0;
}