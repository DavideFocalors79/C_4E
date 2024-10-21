// Dati due numeri interi positivi N1 e N2, verificare se N1 è il quadrato
// di N2.

#include <stdio.h>

int main(int argc, char *argv[])
{

    int n1, n2;

    do
    {
        printf("Inserisci un numero positivo\n");
        scanf("%d", &n1);
        printf("Inserisci un numero positivo\n");
        scanf("%d", &n2);
    } while (n1 <= 0 || n2 <= 0);

    if (n1 == n2 * n2)
    {
        printf("il secondo numero e\' il quadrato del primo\n");
        return 0;
    }
    printf("il secondo numero non e\' il quadrato del primo\n");

    return 0;
}