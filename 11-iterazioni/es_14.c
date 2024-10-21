// Dati due numeri interi positivi N1 ed N2 calcolare, mediante la somma
// ripetuta, il prodotto dei due numeri e visualizzarli.

#include <stdio.h>

int main(int argc, char *argv[])
{

    int n1, n2, quoziente = 0;

    do
    {

        printf("inserisci il primo numero positivo:\n");
        scanf("%d", &n1);

        printf("inserisci il primo numero positivo:\n");
        scanf("%d", &n2);

    } while (n1 <= 0 || n2 <= 0);

    for (int i = n1; i > 0; i--)
    {
        quoziente += n2;
    }

    printf("Il prodotto fa n1 e n2: %d", quoziente);

    return 0;
}