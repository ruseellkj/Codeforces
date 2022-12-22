#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int p, v, t;
    cin >> n;
    int count = 0;
    // int count;
    while (n--)
    {
        cin >> p >> v >> t;
        int sum = p + v + t;
        // int count = 0;
        if (sum >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
