// Dato un numero intero positivo N verificare se N è un numero primo.

#include <stdio.h>

int main(int argc, char *argv[])
{

    int n;

    do
    {
        printf("Inserisci un numero positivo\n");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = n - 1; i > 1; i--)
    {

        if (n % i == 0)
        {
            printf("Il numero non e\' primo\n");
            return 0;
        }
    }

    printf("Il numero e\' primo\n");

    return 0;
}