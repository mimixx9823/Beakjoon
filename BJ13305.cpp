#include <iostream>

using namespace std;

int main()
{
    //------변수선언 및 입력받기
    int cities;           //도시 개수
    long long result = 0; //최소 비용 계산값

    cin >> cities;
    cities--; //맨오른쪽 도시는 무의미 하므로 빼주기

    int *distance = new int[cities]; //도시간 거리
    int cost;
    int prc = 1e9 + 1;

    for (int i = 0; i < cities; i++)
    {
        cin >> distance[i];
    }

    for (int i = 0; i < cities; i++)
    {
        cin >> cost;
        prc = min(cost, prc);
        result += (long long)prc * distance[i];
    }
    //------계산

    cout << result << endl;

    if (distance != NULL)
    {
        delete[] distance;
        distance = NULL;
    }
}