/*
Chiedere in input 5 interi e inserirli in un array.
Stampare a video l'array al contrario.
Esempio:
input 5 6 9 11 12
output 12 11 9 6 5
*/
#include <stdio.h>
#define DIM 5
int main(int argc, char *argv[])
{

    int array[DIM];

    for (int i = 0; i < DIM; i++)
    {
        printf("\nInserisci un numero:");
        scanf("%d", &array[i]);
    }

    for (int i = DIM - 1; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}