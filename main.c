#include <stdio.h>
#include <math.h>
#define MAXVALUE 1000

int SieveOfEratosthenes(int, int[]); //max, vect
void FlagMultipleNumbers(int, int, int[]); // max, sq, vect

int main(void)
{
    int max = 0, vect[MAXVALUE] = {0};
    int sq = 0;
    printf("Ver ate ao numero:\n");
    scanf("%d", &max);

    sq = SieveOfEratosthenes(max, vect);
    FlagMultipleNumbers(max, sq, vect);

    return 0;
}

int SieveOfEratosthenes(int max1, int vect1[])
{
    int i = 0, j = 0;
    int sqr = 0;
    for (i = 2; i <= max1; i++) {
        vect1[j] = i;
        j++;
    }
    sqr = sqrt(max1);
    return sqr;
}

void FlagMultipleNumbers(int max1, int sqr, int vect2[])
{
    int i = 0, j = 0;
    for (i = 2; i <= sqr; i++) {
        for (j = 2*i; j <= max1; j += i) {
            vect2[j-2] = 0;
        }
    }
    for (i = 0; i < max1-1; i++) {
        if (vect2[i] != 0) {
            printf("%d e primo! \n", vect2[i]);
        }
    }
    return;
}

