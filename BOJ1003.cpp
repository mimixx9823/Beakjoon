#include <iostream>
#include <vector>

using namespace std;

int dp[41] = {
    0,
};

int fibonacci(int n)
{
    if (n == 0)
    {
        dp[0] = 0;
        return 0;
    }
    else if (n == 1)
    {
        dp[1] = 1;
        return 1;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }
    else
    {
        return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int test;
    vector<int> cases;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        fibonacci(n);
        cases.push_back(n);
    }

    for (int i = 0; i < test; i++)
    {
        if (cases[i] == 0)
        {
            cout << 1 << " " << 0 << endl;
        }
        else if (cases[i] == 1)
        {
            cout << 0 << " " << 1 << endl;
        }
        else
        {
            cout << dp[cases[i] - 1] << " " << dp[cases[i]] << endl;
        }
    }
}