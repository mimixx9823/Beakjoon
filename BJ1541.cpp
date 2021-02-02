#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char input[50];
    char splitArr[50][50];
    char *splitPt;
    int result = 0;
    int count = 0;
    int temp;
    bool first = true;

    cin >> input;

    splitPt = strtok(input, "-");
    while (splitPt != NULL)
    {
        strcat(splitArr[count], splitPt);
        count++;
        splitPt = strtok(NULL, "-");
    }

    for (int i = 0; i < count; i++)
    {
        temp = 0;
        splitPt = strtok(splitArr[i], "+");
        while (splitPt != NULL)
        {
            temp += atoi(splitPt);
            splitPt = strtok(NULL, "+");
        }

        if (i == 0)
            result += temp;
        else
            result -= temp;
    }

    cout << result << endl;
}
