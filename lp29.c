#include<stdio.h>

int main()
{
    int lanes=25;
    int capacity_lanes=8;

    printf("Initial zero lanes in capacity = %d\n",capacity_lanes);

    printf("Each round spreads bits across lanes.\n");

    printf("After few rounds all lanes contain non-zero bits.\n");

    return 0;
}