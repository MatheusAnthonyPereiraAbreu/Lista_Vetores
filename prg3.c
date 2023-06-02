#include <stdio.h>

int main()
{
    int i, v[8], x, y, res;

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d %d", &x, &y);

    for (i = 0; x < 0 || y < 0; i++)
    {
        scanf("%d %d", &x, &y);
    }
    res = v[x] + v[y];

    printf("%d", res);
    return 0;
}