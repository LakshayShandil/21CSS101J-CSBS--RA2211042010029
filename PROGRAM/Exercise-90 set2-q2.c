#include <stdio.h>

int main()
{
    int N, M;
    printf("Number of friends: ");
    scanf("%d", &N);
    printf("Number of left shoes: ");
    scanf("%d", &M);
    printf("Number of extra pairs of shoes to be bought: %d\n", N-M);
    printf("Number of right shoes to be bought: %d\n", M);
}
