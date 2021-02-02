#include <iostream>
using namespace std;

int main()
{
    int N, M;    // 카드의 수, 조건수
    int Max = 0; // M에 최대한 가까운 3장의 카드의 합
    int Sum = 0; // 3장의 카드 합

    cin >> N >> M;
    int *arr = new int[N]; // 카드 숫자들

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int x, y, z; // for문에 사용할 인덱스
    for (x = 0; x < N - 2; x++)
        for (y = x + 1; y < N - 1; y++)
            for (z = y + 1; z < N; z++)
            {
                Sum = arr[x] + arr[y] + arr[z];
                if (Sum <= M)
                    if (Max < Sum)
                        Max = Sum;
            }

    cout << Max << endl;

    if (arr != NULL)
    {
        delete[] arr;
        arr = NULL;
    }
}