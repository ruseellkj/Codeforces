#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    int flag=0;
    cin >> n;
    
    int a[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }
    
    for(int j=0; j<3; j++){
        for(int i=0; i<n; i++){
            sum = sum + a[i][j];
        }
        
        if(sum==0){
            flag =1;
            
        }else{
            flag=0;
            break;
        }
    }
    
    
    
    if(flag ==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl; 
    }

}