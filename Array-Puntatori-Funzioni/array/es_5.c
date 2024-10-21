/*
scrivere in C un programma che concatena in un unica stringa le stringhe
chieste in input da riga di comando.


Esempio:
$./a.out ciao a tutti gli studenti
ciao a tutti gli studenti
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    
    if(argc < 2){

        printf("Input non valido");
        return -1;
    }
    for(int i=2;i<argc;i++){
        strcat(argv [1], argv[i]);
    }

    printf("%s",argv[1]);
    

    return 0;
}