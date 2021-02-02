#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Time
{
    unsigned int m_begin;
    unsigned int m_end;
};

bool compTime(const Time &a, const Time &b)
{
    if (a.m_end == b.m_end)
        return a.m_begin < b.m_begin;
    return a.m_end < b.m_end; //오름차순 정렬
}

int main()
{
    int n;         //총 회의 수
    int count = 0; //사용 가능 회의 수
    unsigned int last = 0;
    vector<Time> time;

    //입력 받기
    cin >> n;
    Time temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp.m_begin >> temp.m_end;
        time.push_back(temp);
    }

    sort(time.begin(), time.end(), compTime); //끝나는 시간 기준으로 오름차순 정렬하기

    //계산하기
    for (int i = 0; i < n; i++)
    {
        if (last <= time[i].m_begin)
        {
            count++;
            last = time[i].m_end;
        }
    }

    cout << count << endl;

    time.clear();
}