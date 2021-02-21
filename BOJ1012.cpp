//유기농 배추
#include <iostream>

using namespace std;

int M, N;
int graph[50][50] = {0};

bool dfs(int x, int y)
{
    if (x <= -1 || y <= -1 || x >= M || y >= N)
        return false;

    if (graph[x][y] == 1)
    {
        graph[x][y] = 0;

        dfs(x - 1, y);
        dfs(x, y - 1);
        dfs(x + 1, y);
        dfs(x, y + 1);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    //input
    int T;    //테스트 케이스 수
    int K;    //배추개수
    int X, Y; //배추 좌표

    cin >> T;

    int result;

    for (int i = 0; i < T; i++)
    {
        cin >> M >> N >> K;
        for (int j = 0; j < K; j++)
        {
            cin >> X >> Y;
            graph[X][Y] = 1;
        }

        result = 0;

        for (int a = 0; a < M; a++)
        {
            for (int b = 0; b < N; b++)
            {
                if (dfs(a, b))
                    result++;
            }
        }
        cout << result << endl;
    }
}