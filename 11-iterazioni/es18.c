// Data una misura di tempo espressa in secondi S1, convertirla in ore H,
// minuti M e secondi S.

// Esempio: se il numero dei secondi è 1630, si dovrà ottenere, in uscita
// dal programma, 0h 27m 10s.

#include <stdio.h>

int main(int argc, char *argv)
{

    int s1;
    int sec, min, hour;

    do
    {
        printf("Inserisci una misura di tempo in secondi\n");
        scanf("%d", &s1);
    } while (s1 <= 0);

    sec = s1 % 60;
    min = s1 / 60;
    hour = s1 / 3600;
    min = min % 60;

    printf("%dh %dm %ds", hour, min, sec);

    return 0;
}