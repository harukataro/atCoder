#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int h, w, k;
  cin >> h >> w >> k;
  char c[h][w];
  rep(i, h)
  {
    rep(s, w)
    {
      cin >> c[i][s];
    }
  }
  int ans = 0;
  for (int i = 0; i < (1 << h); ++i)
  {
    for (int s = 0; s < (1 << w); ++s)
    {
      int black = 0;
      rep(t, h)
      {
        if (i & (1 << t))
          continue;
        rep(u, w)
        {
          if (s & (1 << u))
            continue;
          if (c[t][u] == '#')
            ++black;
        }
      }
      if (black == k)
        ++ans;
    }
  }
  cout << ans << endl;
}