#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define dimensione 5

int main()
{
    
    int array[dimensione];
    for (int i = 0; i < dimensione; i++)
    {
        srand(time(NULL));
        array[i] = rand() % 10 + 1;
    }

    int p2, p3;

    
    printf("P1: mio PID=%d, mio figlio P2 ha PID=%d\n", getpid(), p2);

    
    p2 = fork();
    if (p2 == 0)
    {
        printf("P2: mio PID=%d, mio padre P1 ha PID=%d\n", getpid(), getppid());

        int p4 = fork();
        if (p4 == 0)
        {
            printf("P4: mio PID=%d, mio padre P2 ha PID=%d\n", getpid(), getppid());
            int somma = 0;
            for (int i = 0; i < dimensione; i++)
            {
                somma += array[i];
            }
            printf("P4: Somma delle componenti del vettore: %d\n", somma);
            exit(0);
        }

        wait(NULL);
        exit(0);
    }

    p3 = fork();
    if (p3 == 0)
    {
        
        printf("P3: mio PID=%d, mio padre P1 ha PID=%d\n", getpid(), getppid());

        int p5 = fork();
        if (p5 == 0)
        {
            
             printf("P5: mio PID=%d, mio padre P3 ha PID=%d\n", getpid(), getppid());
            int somma = 0;
            for (int i = 0; i < dimensione; i++)
            {
                somma += array[i];
            }
            double media = somma / dimensione;
            printf("P5: Media delle componenti del vettore: %.2f\n", media);
            exit(0);
        }

        
        wait(NULL);
        exit(0);
    }

    
    wait(NULL);
    wait(NULL);

    return 0;
}
