#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        vector<int> res;
        // int r = res.size();
        int len = s.size();
        for(int i =0; i<len; i++){
            if(s[i] != '0'){
                int last_Count = len - i -1;
                int num = (s[i]-'0')*pow(10,last_Count);
                res.push_back(num);

            }
        }
        
        cout << res.size() << endl;
        for(auto value : res){
            cout << value << " ";
            cout << endl;
        }
    }

}