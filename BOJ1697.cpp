//숨바꼭질
#include <iostream>
#include <queue>
using namespace std;
#define MAX_VALUE 100001
bool visit[MAX_VALUE];

int bfs(int n, int m)
{
    queue<int> q;
    int time = 0;
    q.push(n);

    while (true)
    {
        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            n = q.front();
            q.pop();

            if (n == m)
                return time;

            if (n > 0 && visit[n - 1] == 0)
            {
                q.push(n - 1);
                visit[n - 1] = 1;
            }

            if (n < 100000 && visit[n + 1] == 0)
            {
                q.push(n + 1);
                visit[n + 1] = 1;
            }

            if (n * 2 <= 100000 && visit[n * 2] == 0)
            {
                q.push(n * 2);
                visit[n * 2] = 1;
            }
        }
        time++;
    }
}

int main()
{
    int N, M;
    cin >> N >> M;
    cout << bfs(N, M) << endl;
}