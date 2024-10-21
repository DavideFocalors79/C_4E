#include <stdio.h>

/*Progettare un algoritmo che effettui le seguenti operazioni:
• legga da tastiera una coppia di valori interi A e B con A<B;
• continui a leggere da tastiera una serie di valori interi, terminando 
quando il valore letto è al di fuori dell’intervallo [A, B];
• conteggi la media dei valori letti;
• prima di terminare, stampi il valore calcolato.
*/

int main(){

  int A, B;
  int numero, i = 0, somma;
  double media;

  do{

    printf("Inserisci il valore A\n");
    scanf("%d", &A);

    printf("inserisci il valore B\n");
    scanf("%d", &B);

  }while (B < A);
  do{

    printf("inserisci un numero\n");
    scanf("%d", &numero);

    if (numero >= A && numero <= B) {

      somma += numero;
      i++;

    }
  }while (numero >= A && numero <= B);

  media = somma / i;
  printf("La media dei valori e/' %.2f", media);

  return 0;
}