//신입사원

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Rank
{
    int first;
    int second;
};

bool MyComp(const Rank &a, const Rank &b)
{
    return a.first < b.first;
}

int main()
{
    int case_num;
    int people_num;
    Rank temp;
    int cur;
    vector<Rank> interview;
    vector<int> result;

    cin >> case_num;
    for (int cases = 0; cases < case_num; cases++)
    {
        cin >> people_num;
        for (int i = 0; i < people_num; i++)
        {
            cin >> temp.first >> temp.second;
            interview.push_back(temp);
        }
        sort(interview.begin(), interview.end(), MyComp);

        cur = interview[0].second;
        result.push_back(1);
        for (int i = 1; i < people_num; i++)
        {
            if (interview[i].second < cur)
            {
                result[cases]++;
                cur = interview[i].second;
            }
        }

        interview.clear();
    }

    for (int i = 0; i < case_num; i++)
    {
        cout << result[i] << endl;
    }
}