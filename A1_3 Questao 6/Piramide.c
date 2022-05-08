#include <stdio.h>

int i, j, n, repetir;
char r;

int main(void)
{

    do
    {

        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &n);
        } while (n == 0 || n < 0);

        for (j = 1; j <= n; j++)
        {
            for (i = 1; i <= j; i++)
            {
                printf("%d  ", j);
            }
            printf("\n");
        }

        do
        {
            printf("\n");
            printf("Deseja digitar outro numero <S ou N>? ");
            scanf("%s", &r);
            printf("\n");
            if (r == 'S' || r == 's')
            {
                repetir = 1;
            }
            else if (r == 'N' || r == 'n')
            {
                repetir = 0;
            }
            else
            {
                printf("Opcao invalida!\n");
            }

        } while (r != 'N' && r != 'n' && r != 'S' && r != 's');

    } while (repetir == 1);

    return 0;
}