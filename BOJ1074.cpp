//Z
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //input
    int N;
    long long r, c;
    long long result = 0;

    cin >> N >> r >> c;

    while (N-- > 0)
    {
        long long half = pow(2, N);
        if ((r % (half * 2)) >= half)
            result += half * half * 2;

        if ((c % (half * 2)) >= half)
            result += half * half;
    }

    cout << result << endl;
}