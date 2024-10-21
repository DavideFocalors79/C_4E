// Popolare un array di interi di dimensione 4, stamparne a video il
// contenuto.

#include <stdio.h>

int main(int argc, char *argv[])
{

    int array[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Inserisci un numero\n");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}