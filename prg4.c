#include <stdio.h>

int main()
{
    int i, v[12], par=0, impar=0;

    for (i = 0; i < 12; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("%d %d", par, impar);

    return 0;
}