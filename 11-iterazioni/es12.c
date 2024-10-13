// Dato N un numero intero positivo, calcolare e visualizzare la
// somma dei primi N numeri pari.

#include <stdio.h>

int main(int argc, char *argv[])
{

    int n, somma = 0;
    do
    {
        printf("Inserisci un numero positivo\n");
        scanf("%d", &n);
    } while (n < 0)

        for (int i = n; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            somma += i;
        }
    }

    printf("Somma dei numeri pari precedenti: %d", somma);

    return 0;
}