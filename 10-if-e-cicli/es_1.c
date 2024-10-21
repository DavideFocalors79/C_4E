
#include <stdio.h>
/*
Esercizio 1
Progettare un algoritmo che effettui la lettura da tastiera di una serie di coppie di valori numerici.
L’algoritmo deve calcolare e stampare il rapporto tra il valore minore e quello maggiore dei due. Il
programma termina quando uno dei due valori o entrambi sono uguali a zero.
*/

int main() {
  int n1, n2;
  double rapporto;

  do {
    printf("Inserisci il primo valore\n");
    scanf("%d", &n1);

    printf("Inserisci il secondo valore\n");
    scanf("%d", &n2);

    if (n1 > n2)
      rapporto = n1 / n2;
    else
      rapporto = n2 / n1;

    printf("Il rapporto è uguale a: %.2f\n", rapporto);

  } while (n1 > 0 && n2 > 0);

  return 0;
}