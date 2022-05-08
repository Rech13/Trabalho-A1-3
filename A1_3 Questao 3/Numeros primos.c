#include <stdio.h>

int repetir, li, ls, nl; // li = limite inferior.
                         // ls = limite superior.
                         // nl = numero de linhas.
char r;

int testador(teste) // esse foi o unico jeito que deu pra fazer pra funcionar
{
    int divisores = 0, cont; // variaveis para testar se é primo ou nao

    for (cont = 1; cont <= teste; cont++) // teste para ver se é primo
    {
        if (teste % cont == 0)
        {
            divisores++;
        }
    }
    if (divisores == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int i, j, k;
    do
    {
        do // pedindo limite inferior
        {
            printf("Informe o valor do limite inferior do intervalo: ");
            scanf("%d", &li);
            if (li < 1)
            {
                printf("\n");
                printf("Numero invalido para limite inferior!");
                printf("Digite um numero maior que 1.");
                printf("\n");
            }
        } while (li < 1);

        do // pedindo limite superior
        {
            printf("Informe o valor do limite superior do intervalo: ");
            scanf("%d", &ls);
            if (ls < li)
            {
                printf("\n");
                printf("Numero invalido para limite superior!");
                printf("Digite um numero maior que o limite inferior.");
                printf("\n");
            }
        } while (ls < li);

        do // pedindo quantia de linhas
        {
            printf("Informe quantos numeros deseja imprimir por linha: ");
            scanf("%d", &nl);
            if (nl <= 0)
            {
                printf("\n");
                printf("Numero invalido para numero de linhas!");
                printf("Digite um numero maior que 0 para o numero de linhas.");
                printf("\n");
            }
        } while (nl <= 0);

        for (i = li; i <= ls; i++)
        {
            if (testador(i) == 1)
            {
                
                
                  
                    
            printf("%d  ", i);
                        
               
                    
            }
        }

        do // repeticao do programa
        {
            printf("\n");
            printf("Deseja repetir o programa? ");
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
                printf("Opcao Invalida!");
            }

        } while (r != 'S' && r != 's' && r != 'N' && r != 'n');
    } while (repetir == 1);
    return 0;
}