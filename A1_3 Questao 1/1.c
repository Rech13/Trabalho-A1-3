#include <stdio.h>

/* O codigo esta implementando um programa para calcular a media dos produtos
    que estejam dentro de uma das categorias citadas*/

int main(void)
{
    char categoria;
    int quantidade = 0, soma = 0, total = 0, i;
    float media;

    for (i = 1; i <= 5; i++) // 5 é só por exemplo, se fosse colocar um limite colocaria uma forma para quebrar o loop.
    {                        
        do
        {
            fflush(stdin);
            printf("Informe a categoria: ");
            scanf("%c", &categoria);
        } while (categoria == "A" || categoria == "B"  || categoria == "C");

        do
        {

            printf("Informe a quantidade: ");
            scanf("%d", &quantidade);
        } while (quantidade < 0);
        soma += quantidade;
        total++;
    }
    media = soma / total;

    printf("A media dos produtos eh %.2f", media);

    return 0;
}