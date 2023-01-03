#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;

    int len = s.size();

    // checking for the first char/digit
    // converting string to int
    int f = s[0] - '0';
    if(f == 9){
        s[0] = '9';
    }else{
        if(f>4){
            // converting int to string
            s[0] = ((9-f) + '0');
        }
        // s[0] = ((9-f) + '0');
    }
    for(int i =1; i<len; i++){
        // converting string to int
        int a = s[i] -'0';
        if(a<5 || a==0){
            continue;
        }else{
            s[i] = ((9-a) + '0');
        }
    }

    cout << s << endl;
    



}