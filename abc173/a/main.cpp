#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
  int N;
  cin >> N;

  int amari = N % 1000;
  if (amari == 0) cout << 0;
  else cout << 1000 - amari;
  return 0;
}
