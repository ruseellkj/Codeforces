#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int X=0;
    string s;
    while(n--)
    {
        cin >> s;
        if(s[1] == '+')
        {
            ++X;
        }
        else
        {
            --X;
        }
    }
    cout << X << endl;
}