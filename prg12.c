#include <stdio.h>

int main()
{
    int i, j, M, N, maior = 0, lin = 0, col = 0;

    scanf("%d %d", &M, &N);

    int x[M][N];

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    maior = x[0][0];
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (x[i][j] > maior)
            {
                maior = x[i][j];
                lin = i;
                col = j;
            }
        }
    }

    printf("%d %d %d", maior, lin, col);
    return 0;
}