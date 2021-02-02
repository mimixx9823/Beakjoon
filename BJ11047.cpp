#include <iostream>
using namespace std;

int main()
{
    int n;         //동전 종류의 수
    int k;         //가치의 합
    int count = 0; //동전 개수

    cin >> n >> k;

    int *a = new int[n]; //동전가치
    for (int i = 1; i <= n; i++)
    {
        cin >> a[n - i]; //배열 a에 내림차순으로 넣기
    }

    for (int i = 0; i < n; i++)
    {
        if (k >= a[i])
        {
            count += k / a[i];
            k %= a[i];
        }
    }

    cout << count << endl;

    delete[] a;
}