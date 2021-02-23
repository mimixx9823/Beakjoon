//듣보잡
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    string temp;
    vector<string> Nname;
    vector<string> Mname;
    vector<string> res;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        Nname.push_back(temp);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        Mname.push_back(temp);
    }

    sort(Nname.begin(), Nname.end());
    sort(Mname.begin(), Mname.end());

    //binary
    for (int i = 0; i < M; i++)
    {
        int start = 0;
        int end = Nname.size() - 1;
        int mid = (start + end) / 2;
        string target = Mname[i];

        while (start <= end)
        {
            mid = (start + end) / 2;
            if (Nname[mid] < target)
            {
                start = mid + 1;
            }
            else if (Nname[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                res.push_back(target);
                break;
            }
        }
    }

    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
}