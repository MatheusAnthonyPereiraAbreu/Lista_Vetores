#include <stdio.h>

int main()
{
    int i;
    char x[8];
        printf("Coloque aqui8 caracteres:");

    for (i = 0; i < 8; i++)
    {
        scanf(" %c",&x[i]);
    }
        for (i = 7; i>= 0 ; i--)
        {
            printf("%c ", x[i]);
        }
        printf("\n");
        return 0;
}