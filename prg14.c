#include <stdio.h>

int main()
{
    int i, j, m[3][3], lin = 0, col = 0, dia = 0, diain = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        lin = 0;
        col = 0;
        for (j = 0; j < 3; j++)
        {
            if (m[i][j] == 1)
            {
                lin++;
            }

            if (m[j][i] == 1)
            {
                col++;
            }

            if (lin == 3 || col == 3)
            {
                printf("sim");
                return 0;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        if (m[i][i] == 1)
        {
            dia++;
        }
    }

    for (i = 0; i < 3; i++)
    {
        if (m[i][2 - i] == 1)
        {
            diain++;
        }
    }

    if (dia == 3 || diain == 3)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}