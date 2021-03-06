#include <stdio.h>

int edge[101][101];
int visited[101];
int cnt = 0;
int countNode;

void dfs(int n)
{
    visited[n] = 1;

    for (int i = 1; i <= countNode; i++)
    {
        if (edge[n][i] == 1 && !visited[i])
        {
            cnt++;
            dfs(i);
        }
    }
}

int main()
{
    int countEdge;
    int a, b;

    scanf("%d", &countNode);
    scanf("%d", &countEdge);

    for (int i = 0; i < countEdge; i++)
    {
        scanf("%d %d", &a, &b);
        edge[a][b] = 1;
        edge[b][a] = 1;
    }

    dfs(1);

    printf("%d\n", cnt);
}