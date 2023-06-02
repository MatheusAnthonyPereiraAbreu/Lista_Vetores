#include <stdio.h>

int main()
{
    int x[8], y[8], i, j, som = 0, prod = 0, encontrado = 0;

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &y[i]);
    }

    for (i = 0; i < 8; i++)
    {
        som = (x[i] + y[i]);
        printf("%d ", som);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        prod = (x[i] * y[i]);
        printf("%d ", prod);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (x[i] == y[j])
            {
                printf("%d ", x[i]);
            }
        }
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            encontrado = 0;
            if (x[i] == y[j])
            {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado)
        {
            printf("%d ", x[i]);
        }
    }

    return 0;
}