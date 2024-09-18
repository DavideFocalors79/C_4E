
#include <stdio.h>
#include <math.h>
/*Progettare un algoritmo che effettui la lettura da tastiera di una serie
di coppie di valori numerici reali (sia positivi che negativi che zero).
Per ciascuna coppia, l’algoritmo deve calcolare e stampare il valore
della radice quadrata del rapporto tra il valore maggiore e quello
minore dei due. Il programma termina quando vengono inseriti dei valori
che non permettono di svolgere il calcolo nel dominio dei numeri reali.
Prima di terminare si richiede di stampare un messaggio che indichi la
ragione per cui non è stato possibile svolgere il calcolo.*/

int main() {
  int n1, n2;
  double prodotto;
  double radice;

  do {
    printf("Inserisci il primo numero\n");
    scanf("%d", &n1);

    if (n1==0){
        printf("Non si puo dividere per 0");
        break;
    } 

    printf("Inserisci il secondo numero\n");
    scanf("%d", &n2);

    if (n2==0){
        printf("Non si puo dividere per 0");
        break;
    } 
    
    if (n1 > n2)
      prodotto = n1 / n2;
    else
      prodotto = n2 / n1;
    printf("il prodotto e': %.2f\n", prodotto);
    
    radice=prodotto;
    
    if(radice>0){
        radice=sqrt(radice);
        printf("La radice del prodotto risulta %.2f\n",radice);
    }else{
        printf("non si puo calcolare la radice di un numero negativo");
        break;
    }
    
  } while (radice>0);
 
  return 0;
}