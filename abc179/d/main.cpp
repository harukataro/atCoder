#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N, K;
  cin >> N >> K;
  int L, R;
  list<int> S;
  rep(i, K)
  {
    cin >> L >> R;
    for (int s = L; s <= R; s++)
      S.push_back(s);
  }

}
