#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int count=0;
    cin >> n >> k;
    int a[100];
    for(int i = 0; i<=n-1; i++)
    {
        cin >> a[i];
    }
    for(int i =0; i<=n-1; i++)
    {
        // imp thing to note is that its a[k-1] for case 5 5 | 1 1 1 1 1 
        if(a[i]>=a[k-1] && a[i]>0)
        {
            count++;
        }
    }
    cout << count << endl;


}