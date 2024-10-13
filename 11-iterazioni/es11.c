// Dato N un numero intero positivo, calcolare e visualizzare la somma dei
// primi N numeri dispari.

#include <stdio.h>

int main(int argc, char *argv[])
{

    int n, somma = 0;

    printf("Inserisci un numero\n");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        if (i % 2 != 0)
        {

            somma += i;
        }
    }
    printf("%d \n", somma);

    return 0;
}