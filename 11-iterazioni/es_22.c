// Dato un numero N calcolare e visualizzare tutte le coppie di numeri minori di N che
// danno per somma il numero stesso. Non considerare la proprietà commutativa.

#include <stdio.h>

int main(int argv, char *argc[])
{

    int n;
    do
    {
        printf("Inserisci un numero positivo\n");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = n; i > 0; i--)
    {
        if (i + (n - i) == n)
        {
            printf("%d + %d = %d\n", i, n - i, n);
        }
    }

    return 0;
}