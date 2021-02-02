#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(const int &a, const int &b)
{
    return a < b; //오름차순
}

int main()
{
    int n; //사람 수
    int temp;
    int sum = 0;
    vector<int> time; //걸리는 시간

    cin >> n;
    //입력
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        time.push_back(temp);
    }

    sort(time.begin(), time.end(), Compare);

    //합
    for (int i = 0; i < n; i++)
    {
        sum += (n - i) * time[i];
    }

    cout << sum << endl;
}