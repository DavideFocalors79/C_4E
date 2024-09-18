#include <stdio.h>
/*
Progettare un algoritmo che effettui le seguenti operazioni:

• continui a leggere da tastiera una serie di terne di valori interi A ,
B e C finchè non vengono inseriti dei valori tali per cui A + B < C
• conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
• prima di terminare, visualizzi il valore dei valori conteggiati
*/

int main(){
   
    int pari=0, dispari=0, nullo=0;
    int differenza;
    int A,B,C;

    do{
      
        printf("\nInserisci il primo numero");
        scanf("%d", &A);
        printf("Inserisci il secondo numero");
        scanf("%d", &B);
        printf("Inserisci il terzo numero");
        scanf("%d", &C);

        differenza=A-B;

        if(differenza==0)
            nullo++;
        else if(differenza%2==0)
            pari++;
        else
            dispari++;

    }while(A+B>=C);

    printf("\nDifferenze pari: %d", pari);
    printf("\nDifferenze dispari: %d", dispari);
    printf("\nDifferenze nulle: %d", nullo);

return 0;
}