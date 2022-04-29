#include <stdio.h>

char r1, r2;
float temp;

int main(void)
{
    printf("Como voce esta se sentindo?\n");
    printf("Responda S para sim e N para nao.\n");
    scanf("%c", &r1);
    if (r1 == 'S' || r1 == 's')
    {
        printf("Voce esta saudavel.\n");
    }
    else if (r1 == 'N' || r1 == 'n')
    {
        printf("Voce se sente bem?\n");
        printf("Responda S para sim e N para nao.\n");
        fflush(stdin);
        scanf("%c", &r2);
        if (r2 == 'S' || r2 == 's')
        {
            printf("Voce esta doente.\n");
        }
        else if (r2 == 'N' || r2 == 'n')
        {
            printf("Qual a sua temperatura?\n");
            scanf("%f", &temp);
            if (temp <= 37)
            {
                printf("Voce esta saudavel.\n");
            }
            else
            {
                printf("Voce esta doente.\n");
            }
        }
    }

    return 0;
}