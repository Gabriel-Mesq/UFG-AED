#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int i, j, n, m, k, aux, aux2 = 0, swap;
    scanf("%d %d", &n, &m);
    if ((m < 1 || m > 40) || (n < 1 || n > 40))
        return 0;
    int vetA[n];
    int vetB[m];
    int vetC[n + m];
    memset(vetC, 0, sizeof(vetC));
    for (i = 0; i < n; i++)
        scanf("%1d", &vetA[i]);
    for (i = 0; i < m; i++)
        scanf("%1d", &vetB[i]);
    if (vetA[0] && vetB[0])
    {
        for (i = n - 1; i >= 0; i--)
        {
            aux = n + m - 1;
            for (j = m - 1; j >= 0; j--)
            {
                vetC[aux - aux2] += vetA[i] * vetB[j];
                aux--;
            }
            aux2++;
        }
        for (i = n + m - 1; i >= 1; i--)
        {
            if (vetC[i] > 9)
            {
                vetC[i - 1] += floor(vetC[i] / 10);
                vetC[i] = vetC[i] % 10;
            }
        }
        if (vetC[0] != 0)
            printf("%d", vetC[0]);
        for (i = 1; i < n + m; i++)
            printf("%d", vetC[i]);
        printf("\n");
    }
    else
    {
        printf("0\n");
        return 0;
    }
    return 0;
}
