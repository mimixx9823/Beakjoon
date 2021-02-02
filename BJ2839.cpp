//설탕배달
#include <stdio.h>

#pragma warning(disable : 4996)

int main()
{
    int N;
    int MAX;
    int result = -1;

    scanf("%d", &N);
    MAX = (N / 3) + 1;

    for (int i = 0; i < MAX; i++)
    {
        if (((N - 3 * i) % 5) == 0)
        {
            result = i + (N - 3 * i) / 5;
            break;
        }
    }

    printf("%d\n", result);
}