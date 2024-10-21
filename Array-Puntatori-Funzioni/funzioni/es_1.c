/*
Leggere in input da tastiera due numeri maggiori di 0 e farne la somma.
*/

#include <stdio.h>

int verifica(int n)
{
    if (n > 0)
    {
        return 0;
    }
    return -1;
}

int Calcola_somma(int n1, int n2)
{

    int somma = n1 + n2;

    return somma;
}

int main(int argc, char *argv[])
{

    int n1, n2, somma = 0;

    do
    {
        printf("\nInserisci un numero maggiore di 0: ");
        scanf("%d", &n1);
    } while (verifica(n1) < 0);

    do
    {
        printf("\nInserisci un numero maggiore di 0: ");
        scanf("%d", &n2);
    } while (verifica(n2) < 0);

    somma = Calcola_somma(n1, n2);

    printf("\nSomma dei due numeri: %d", somma);

    return 0;
}