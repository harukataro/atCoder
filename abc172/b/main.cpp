#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
  string s,t;
  cin >> s >> t;
  int ans =0;
  rep(i,s.size()){
    if(s[i] != t[i])
      ans++;
  }
  cout << ans;

}
