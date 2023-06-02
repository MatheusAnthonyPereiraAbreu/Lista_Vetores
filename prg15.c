#include <stdio.h>

int main()
{
    int n, i, j, res1 = 0, res2 = 0, res3 = 0, res4 = 0;

    printf("Informe a matriz: ");
    scanf("%d", &n);

    int x[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf(" %d", &x[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res1 += x[i][j];
            printf("%d", res1);
        }
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            res2 += x[i][j];
            printf("%d", res2);
        }
    }
    for (i = 0; i < n; i++)
    {
        res3 += x[i][i];
    }

    for (i = 0; i < n; i++)
    {
        res4 += x[i][n - i - 1];
    }

    printf("%d \n", res1);
    printf("%d \n ", res2);
    printf("%d \n", res3);
    printf("%d \n", res4);
    if (res1 == res2 && res1 == res3 && res3 == res4)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}