#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

int main()
{
    int numero;

    do
    {
        printf("P1: Inserisci un numero intero tra 3 e 10: ");
        scanf("%d", &numero);
    } while (numero < 3 || numero > 10);

    printf("P1: mio PID=%d, mio figlio P2 ha PID=%d\n", getpid(), -1);

    int p2 = fork();
    if (p2 == 0)
    {

        printf("P2: mio PID=%d, mio padre P1 ha PID=%d\n", getpid(), getppid());
        exit(0);
    }

    int p3 = fork();
    if (p3 == 0)
    {
        printf("P3: mio PID=%d, mio padre P1 ha PID=%d\n", getpid(), getppid());

        int p4 = fork();
        if (p4 == 0)
        {
            printf("P4: mio PID=%d, mio padre P3 ha PID=%d\n", getpid(), getppid());
            for (int i = 1; i <= 10; i++)
            {
                printf("P4: %d x %d = %d\n", numero, i, numero * i);
            }
            exit(0);
        }

        int p5 = fork();
        if (p5 == 0)
        {
            printf("P5: mio PID=%d, mio padre P3 ha PID=%d\n", getpid(), getppid());
            for (int i = numero; i >= 0; i--)
            {
                printf("P5: %d\n", i);
                sleep(1);
            }
            exit(0);
        }

        wait(NULL);
        wait(NULL);
        exit(0);
    }

    wait(NULL);
    wait(NULL);

    return 0;
}
