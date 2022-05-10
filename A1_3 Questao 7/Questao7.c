#include <stdio.h>

float quantidade, valor, total = 0, media;
float mult, quantitotal; // quantitotal = total de quantidades
char r;
int repetir, cem, cinquenta, vinte, dez, cinco, dois, um;

int main(void)
{
    int totali; // total inteiro
    float totaldec; // total decimal

    do
    {
        do
        {
            printf("Informe a quantidade de um produto: ");
            scanf("%f", &quantidade);
            if (quantidade <= 0)
            {
                break;
            }
            do
            {
                printf("Informe o valor unitario do produto: ");
                scanf("%f", &valor);
            } while (valor < 0);
            printf("\n");

            quantitotal += quantidade;
            mult = quantidade * valor;
            total += mult;

        } while (quantidade != 0);

        media = total / quantitotal;

        printf("VALOR TOTAL DA COMPRA: R$ %0.2f\n", total);
        printf("VALOR MEDIO DA COMPRA: R$ %0.2f\n", media);

        totali = total;
        totaldec = total - totali;

        printf("\n");
        printf("O valor total da compra e %d reais e %.2f centavos.\n", totali, totaldec);

        printf("%d reais equivale a: \n", totali);

        cem = totali / 100;
        cinquenta = (totali % 100) / 50;
        vinte = ((totali % 100) % 50) / 20;
        dez = (((totali % 100) % 50) % 20) / 10;
        cinco = ((((totali % 100) % 50) % 20) % 10) / 5;
        dois = (((((totali % 100) % 50) % 20) % 10) % 5) / 2;
        um = ((((((totali % 100) % 50) % 20) % 10) % 5) % 2) / 1; 

        printf("%d nota(s) de 100\n", cem);
        printf("%d nota(s) de 50\n", cinquenta);
        printf("%d nota(s) de 20\n", vinte);
        printf("%d nota(s) de 10\n", dez);
        printf("%d nota(s) de 5\n", cinco);
        printf("%d nota(s) de 2\n", dois);
        printf("%d moedas(s) de 1\n", um);
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