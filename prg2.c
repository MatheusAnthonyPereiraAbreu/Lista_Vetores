#include <stdio.h>

int main()
{
    int m[10], n[10], i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &m[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        n[i] = m[i] * m[i];
        printf("%d ", n[i]);
    }
    return 0;
}