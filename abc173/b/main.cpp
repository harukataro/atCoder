#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
  int N;
  cin >> N;
  int ac =0;
  int wa = 0;
  int tle = 0;
  int re = 0;
  rep(i,N){
    string s;
    cin >> s;
    if(s == "AC") ac++;
    else if(s == "WA") wa++;
    else if(s == "TLE") tle++;
    else re++;
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}
