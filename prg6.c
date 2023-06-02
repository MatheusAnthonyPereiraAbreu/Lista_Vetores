#include <stdio.h>

int main()
{
    int v[10], i, maior = 0, menor=100000, pos1 = 0, pos2 = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] > maior)
        {
            maior = v[i];
            pos1 = i;
        }

        if (v[i] < menor)
        {
            menor = v[i];
            pos2 = i;
        }
    }

    printf("%d %d \n", maior, menor);
    printf("%d %d", pos1, pos2);
    return 0;
}