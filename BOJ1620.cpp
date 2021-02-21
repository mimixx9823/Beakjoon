//나는야 포켓몬 마스터 이다솜
#include <iostream>
#include <stdlib.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    int nPkmon;
    int nQuestion;
    int temp;
    map<string, int> pk1;
    string pk2[100001];
    string questList[100001];

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> nPkmon >> nQuestion;

    for (int i = 1; i <= nPkmon; i++)
    {
        cin >> pk2[i];
        pk1.insert(pair<string, int>(pk2[i], i));
    }

    for (int i = 1; i <= nQuestion; i++)
    {
        cin >> questList[i];
    }

    map<string, int>::iterator iter;
    for (int i = 1; i <= nQuestion; i++)
    {
        temp = atoi(questList[i].c_str());
        if (temp != 0) //숫자일때
        {
            cout << pk2[temp] << '\n';
        }
        else //문자열일때
        {
            iter = pk1.find(questList[i]);
            if (iter != pk1.end())
            {
                cout << iter->second << '\n';
            }
        }
    }
}