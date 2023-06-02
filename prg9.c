#include <stdio.h>

int main()
{
    int x[8], i, j, divi;

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 8; i++)
    {
        divi = 1;
        for (j = 1; j < 10; j++)
        {
            if ((x[i] % j == 0) && (x[i] != j))
            {
                divi++;
            }
        }

        if (divi == 2)
        {
            printf("%d ", x[i]);
        }
    }
    return 0;
}