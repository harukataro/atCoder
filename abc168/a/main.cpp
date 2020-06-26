#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  string N;
  cin >> N;

  int lastChar = (N[N.size() -1]) - '0';
  

  if (lastChar == 2 || lastChar == 4 || lastChar == 5 || lastChar == 7 || lastChar == 9)
  {
    cout << "hon" << endl;
    return 0;
  }
  else if (lastChar == 0 || lastChar == 1 || lastChar == 6 || lastChar == 8)
  {
    cout << "pon" << endl;
    return 0;
  }
  else
  {
    cout << "bon" << endl;
  }
}
