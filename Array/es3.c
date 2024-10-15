/*
Chiedere in input 10 interi e inserirli in un array.
Stampare a video prima tutti i numeri pari e
in seguito tutti i numeri dispari

Esempio:
input 5 6 9 11 12 13 14 10 8 21
output
6 12 14 10 8
5 9 11 13 21
*/

#include <stdio.h>
#define DIM 10

int main(int argc, char *argv[])
{

    int array[DIM];

    for (int i = 0; i < DIM; i++)
    {
        printf("\nInserisci il numero in posizione %d:", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < DIM; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d", array[i]);
        }
    }

    printf("\n");

    for (int i = 0; i < DIM; i++)
    {
        if (array[i] % 2 == 1)
        {
            printf("%d", array[i]);
        }
    }

    return 0;
}