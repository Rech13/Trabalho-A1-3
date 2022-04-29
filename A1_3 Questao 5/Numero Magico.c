#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ni; // ni = Numero Informado.
int nm; // np = Numero magico.

int main(void)
{
    srand(time(NULL));
    nm = rand() % 11;
    printf("Tente advinhar o Numero Magico!\n");

    while (ni != nm)
    {
        printf("Informe um numero:\n");
        scanf("%d", &ni);
        if (ni > nm)

        {
            printf("\n");
            printf("Errado, muito alto\n");
            printf("Tente novante\n");
            printf("\n");
        }
        else if (ni < nm)
        {
            printf("\n");
            printf("Errado, muito baixo\n");
            printf("Tente novamente\n");
            printf("\n");
        }
    }
    if (ni == nm)
    {
        printf("\n");
        printf("Certo! %d e o numero magico.", nm);
    }
    return 0;
}
