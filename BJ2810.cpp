//컵홀더

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int N;
    char seat[100];
    int S_count = 0;
    int result;

    cin >> N;
    cin >> seat;

    if (strchr(seat, 'L') == NULL)
    {
        result = N;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (seat[i] == 'S')
                S_count++;
        }

        result = S_count + (N - S_count) / 2 + 1;
    }

    cout << result << endl;
}