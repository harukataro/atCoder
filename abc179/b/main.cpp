#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  cin >> N;
  int D1[N], D2[N];
  rep(i, N) cin >> D1[i] >> D2[i];

  int zoro = 0;
  rep(i, N)
  {
    if (D1[i] == D2[i])
    {
      zoro += 1;
      if (zoro == 3)
      {
        cout << "Yes" << endl;
        ;
        return 0;
      }
    }
    else
    {
      zoro = 0;
    }
  }
  cout << "No"
       << endl;
}
