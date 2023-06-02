#include <stdio.h>

int main()
{
    int i, j, m[4][4], par = 0, impar = 0;

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
            if (m[i][j] % 2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
    }

    printf("%d %d", par, impar);

    return 0;
}