#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  string S;
  cin >> S;
  if (S[S.size() - 1] == 's')
  {
    cout << S << "es" << endl;
  }
  else
  {
    cout << S << "s" << endl;
  }
}
