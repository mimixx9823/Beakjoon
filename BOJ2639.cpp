#include <stdio.h>

int map[128][128];
int whiteCount = 0;
int blueCount = 0;
int isblue;

void cut(int x, int y, int size)
{
    isblue = map[x][y];
    for (int i = x; i < (x + size); i++)
    {
        for (int j = y; j < (y + size); j++)
        {
            if (map[i][j] != isblue)
            {
                int next = size / 2;
                cut(x, y, next);
                cut(x + next, y, next);
                cut(x, y + next, next);
                cut(x + next, y + next, next);
                return;
            }
        }
    }

    if (isblue)
        blueCount++;
    else
        whiteCount++;
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &map[i][j]);

    cut(0, 0, N);

    printf("%d\n%d\n", whiteCount, blueCount);
}