/* Una birreria a fine serata deve conteggiare l’incasso. La cassiera accende il software gestionale il quale le chiede di inserire una alla volta le consumazioni servite.
Le consumazioni si dividono in bevande e ristorazione. La cassiera per ogni consumazione deve inserire la tipologia di consumazione e il suo importo.

Quando la cassiera inserisce la stringa “esci” il software deve mostrare a video le seguenti informazioni:
1.	La media dell’incasso delle bevande
2.	La media dell’incasso della ristorazione
3.	Deve indicare se sono state vendute più bevande o più ristorazioni */

#include <stdio.h>
#include <string.h>

void inputDati(double *sommaBevande, double *sommaRistorazione, int *numBevande, int *numRistorazione)
{
    double importo;
    int scelta;

    printf("Scegli quale consumazione inserire\n[1] Bevande\n[2] Ristorazione\n");
    do
    {
        scanf("%d", &scelta);
        if (scelta < 1 || scelta > 2)
            printf("Valore non valido. Riprova\n");
    } while (scelta < 1 || scelta > 2);

    do
    {
        printf("Inserisci l'importo della consumazione: ");
        scanf("%lf", &importo);
    } while (importo < 0);

    if (scelta == 1)
    {
        *sommaBevande += importo;
        (*numBevande)++;
    }
    else
    {
        *sommaRistorazione += importo;
        (*numRistorazione)++;
    }
}

int main(int argc, char *argv[])
{

    char inputChiusura[10];
    int numBevande = 0, numRistorazione = 0;
    double sommaBevande = 0, sommaRistorazione = 0;
    double mediaBevande, mediaRistorazione;

#define PAROLACHIUSURA "chiudi"

    do
    {

        inputDati(&sommaBevande, &sommaRistorazione, &numBevande, &numRistorazione);

        printf("Desideri chiudere la cassa? Digita 'chiudi' senza spazi per confermare: ");
        scanf("%s", inputChiusura);

    } while (strcmp(inputChiusura, PAROLACHIUSURA) != 0); // chiude la cassa solo se le due stringhe sono uguali

    mediaBevande = sommaBevande / numBevande;
    mediaRistorazione = sommaRistorazione / numRistorazione;

    printf("\n\nLa media degli incassi delle bevande e' %.2f€", mediaBevande);
    printf("\nLa media degli incassi della ristorazione e' %.2f€", mediaRistorazione);

    if (numBevande > numRistorazione)

        printf("\nSono state vendute piu' bevande (%d consumazioni)", numBevande);

    else if (numBevande == numRistorazione)

        printf("\nSono state vendute tante bevande quante ristorazioni (%d consumazioni a testa)", numBevande);
    
    else
       
        printf("\nSono state vendute piu' ristorazioni (%d consumazioni)", numRistorazione);
	
	
    return 0;
}