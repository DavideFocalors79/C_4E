/*
Si scriva un programma in linguaggio C che implementi una funzione
denominata palindroma che prenda in input una stringa e restituisca
1 se la stringa è palindroma altrimenti -1

esempio:
$ ./a.out anna
$ anna è una stringa palindroma

esempio:
$ ./a.out ciao
$ ciao non è una stringa palindroma
*/

#include <stdio.h>
#include <string.h>

int palindroma(char parola[])
{
    int i, k = strlen(parola) - 1;

    for (i = 0; i <= k; i++)
    {
        if (parola[i] != parola[k])
            return -1;
        k--;
    }

    return 1;
}

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Input non validi");
        return -1;
    }

    if (palindroma(argv[1]) == -1)
    {
        printf("la parola non e\' palindroma");
    }
    else
    {
        printf("la parola e\' palindroma");
    }

    return 0;
}