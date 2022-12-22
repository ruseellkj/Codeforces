// Lights_Out question
// codeforces Round 275A

#include <bits/stdc++.h>
using namespace std;

int input[3][3];
int toggle[3][3];

int main()
{

    // taking the array input
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> input[i][j];
            toggle[i][j] == input[i][j];
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (input[i][j] != 0)
            {
                toggle[i][j - 1] += input[i][j];
                toggle[i][j + 1] += input[i][j];
                toggle[i - 1][j] += input[i][j];
                toggle[i + 1][j] += input[i][j];
            }
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (toggle[i][j] % 2)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }
    return 0;
}