#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int count = 0;
        if (n % 10 != 0)
        {
            cout << n % 10 << " ";
            count++;
        }
        int ans = n % 10;
        n = n - ans;

        if (n % 100 != 0)
        {
            cout << n % 100 << " ";
            count++;
        }
        ans = n % 100;
        n = n - ans;

        if (n % 1000 != 0)
        {
            cout << n % 1000 << " ";
            count++;
        }
        ans = n % 1000;
        n = n - ans;

        if (n % 10000 != 0)
        {
            cout << n % 10000 << " ";
            count++;
        }
        cout << count;
    }

    // cout << endl;
}