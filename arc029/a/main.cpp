#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
  int N,ans=10000000;
  cin >> N;
  int t[N];
  rep(i,N) cin >> t[i];

  rep(i,(1<<N)){
    bitset<4> bit(i);
    int a,b;
    a=0;
    b=0;
    rep(j,N){
      if(i&(1<<j)){
        a += t[j];
      }
      else{
        b += t[j];
      }
    }
    if(ans > max(a, b))
      ans = max(a,b);
  }
  cout << ans << endl;
}
