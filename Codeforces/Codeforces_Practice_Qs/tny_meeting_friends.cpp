#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int middle;
    // checking for the b number
    if ((x1 < x2 && x2 < x3) || (x3 < x2 && x2 < x1))
    {
        middle = x2;
    }
    // checking for a number
    else if ((x2 < x1 && x1 < x3) || (x3 < x1 && x1 < x2))
    {
        middle = x1;
    }
    else
    {
        middle = x3;
    }
    int d1 = 0;
    int d2 = 0;

    if (middle > x1)
    {
        d1 = middle - x1;
    }
    else if (middle > x2)
    {
        d1 = middle - x2;
    }
    else
    {
        d1 = middle - x3;
    }

    if (middle < x1)
    {
        d2 = x1 - middle;
    }
    else if (middle < x2)
    {
        d2 = x2 - middle;
    }
    else
    {
        d2 = x3 - middle;
    }

    int sum = 0;
    sum = d1 + d2;

    cout << sum << endl;

    return 0;
}