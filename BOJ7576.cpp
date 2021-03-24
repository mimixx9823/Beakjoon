#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

// 오른쪽, 아래, 왼쪽, 위
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int M, N;
int result = 0;
int map[1000][1000];
queue<pair<int, int> > q;

void bfs()
{
    while (!q.empty())
    {
        pair<int, int> tmp = q.front();
        int y = tmp.first;
        int x = tmp.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < M && ny < N && map[ny][nx] == 0)
            {
                map[ny][nx] = map[y][x] + 1;
                q.push(make_pair(ny, nx));
            }
        }
    }
}

int main()
{
    int temp;

    scanf("%d %d", &M, &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &temp);
            map[i][j] = temp;

            if (map[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }

    bfs();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (map[i][j] == 0)
            {
                printf("-1");
                return 0;
            }

            if (result < map[i][j])
            {
                result = map[i][j];
            }
        }
    }

    printf("%d", result - 1);
}