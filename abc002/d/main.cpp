#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  bool con[15][15] = {};
  int N, M, x, y;
  cin >> N >> M;
  rep(i, M) {
    cin >> x >> y;
    con[x -1][y -1] = con[y -1][x-1] = true;
  }

  int ans = 0;
  for(int s=1 << N; --s;){
    int t = bitset<32>(s).count();
    if(t <= ans){continue;}

    bool ok = true;
    for(int i=0; i < N; ++i)
    for(int j=0; j < i; ++j){
      if(s >> i & s >> j & 1 && !con[i][j]){
        ok = false;
      }
    }
    if(ok){ans = t;}
  }
  cout << ans << endl;
}