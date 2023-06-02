#include <stdio.h>

int main()
{
    int i, j, m[4][4], cont = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (m[i][j] > 10)
            {
                cont++;
            }
        }
    }

    printf("%d", cont);

    return 0;
}