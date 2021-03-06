#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  cin >> N;
  set<string> noQ;
  set<string> Q;
  string x;
  rep(i, N)
  {
    cin >> x;
    if (x[0] == '!')
      Q.insert(x);
    else
      noQ.insert(x);
  }

  for (auto noq : noQ)
  {
    for (auto q : Q)
    {
      if (noq == q.substr(1))
      {
        cout << noq << endl;
        return 0;
      }
    }
  }
  cout << "satisfiable" << endl;
}
