#include <stdio.h>
#include <math.h>

/* Progettare un algoritmo che risolve il seguente problema. Si desidera
calcolare la somma delle radici quadrate di N valori numerici inseriti
dall’utente, con N inserito in input.
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali). */

int main(int argc, char *argv[])
{
    
    int nValori, numCorrente;
    double somma = 0;

    do
    {
        printf("Quanti numeri vuoi inserire? ");
        scanf("%d", &nValori);
    } while (nValori <= 0); // controllo che non venga inserito un valore minore o uguale a 0

    for (int i = 0; i < nValori; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &numCorrente);

        if (numCorrente < 0)
        {
            printf("\nNumero non valido perche' e' negativo");
            break;
        }

        somma += sqrt(numCorrente); 
    }

    printf("\n\nLa somma delle radici quadrate dei numeri inseriti e': %.2f", somma);

    return 0;
}