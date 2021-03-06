#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int h, w, m;
  cin >> h >> w >> m;
  int x[m], y[m];
  rep(i, m) cin >> x[i] >> y[i];

  bool cell[h][w];
  int bad = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = x[i]; j < h; j++)
    {
      if (cell[x[j]][y[i]])
        continue;
      bad++;
      cell[x[j]][y[i]] = true;
    }
    for (int j = y[i]; j < w; j++)
    {
      if (cell[x[i]][y[j]])
        continue;
      bad++;
      cell[x[i]][y[j]] = true;
    }

    cout << h * w - bad;
  }
}
