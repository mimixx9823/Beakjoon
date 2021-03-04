#include <stdio.h>
#include <queue>
#pragma warning(disable : 4996)
using namespace std;

priority_queue<int, vector<int>, greater<int> > pq;
int N;

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int input;
        scanf("%d", &input);
        if (input == 0)
        {
            if (pq.empty())
            {
                printf("%d\n", 0);
            }
            else
            {
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else
        {
            pq.push(input);
        }
    }
}