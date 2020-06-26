#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

int main(){
    int n;
    string s;

    int a[n];
    int c[n-1];
    int ans = 0;
  
    rep(i,n){
      int temp;
      cin >> temp;
      --temp;
      a[i]= temp;
    }
    rep(i,n){
      int b;
      cin >> b;
      ans += b; 
    }
    rep(i,n-1){cin >> c[i];}
    
    rep(i,n){
        if(a[i] != 0 && a[i] == (a[i-1] + 1)){
            ans += c[a[i-1]];
        }
    }
    cout << ans;
}