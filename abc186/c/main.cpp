#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    int judge = 0;

    string str10 = to_string(i);
    for (int j = 0; j < str10.length(); ++j)
    {
      if (str10[j] == '7')
      {
        judge++;
        break;
      }
    }
    stringstream ss;
    ss << oct << i;
    string str8 = ss.str();
    for (int j = 0; j < str8.length(); ++j)
    {
      if (str8[j] == '7')
      {
        judge++;
        break;
      }
    }
    if (judge == 0)
      ans++;
  }
  cout << ans << endl;
}
