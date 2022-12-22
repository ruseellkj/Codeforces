#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int i, j;
    int x, y;
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (a[i][j] == 1)
            {
                x = i;
                y = j;
                break;
            }
        }
    }
    // cout << x << y;

    if (y > 3 && x > 3)
    {

        count = (y - 3) + (x - 3);
    }
    else if (x < 3 && y > 3)
    {
        count = (y - 3) + (-x + 3);
    }
    else if (x > 3 && y < 3)
    {
        count = (-y + 3) + (x - 3);
    }
    else
    {
        count = (-y + 3) + (-x + 3);
    }

    cout << count << endl;
}