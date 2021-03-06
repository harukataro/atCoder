#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;

  for (int s = 0; s < N - 1; s++)
  {
    int A = 0;
    int T = 0;
    int C = 0;
    int G = 0;
    if (S[s] == 'A')
      A = 1;
    else if (S[s] == 'T')
      T = 1;
    else if (S[s] == 'C')
      C = 1;
    else if (S[s] == 'G')
      G = 1;

    for (int e = s + 1; e < N; e++)
    {
      if (S[e] == 'A')
        A++;
      else if (S[e] == 'T')
        T++;
      else if (S[e] == 'C')
        C++;
      else if (S[e] == 'G')
        G++;

      if (A == T && C == G)
        ans++;
    }
  }
  cout << ans << endl;
}
