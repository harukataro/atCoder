# include <cstdio>
# include <algorithm>
# include <cstring>
# include <cmath>
# include <climits>
# include <iostream>
# include <string>
# include <queue>
# include <vector>
# include <set>
# include <map>
# include <cstdlib>
# include <stack>
# include <ctime>
using namespace std;

# define Rep(i,a,b) for(int i=a;i<=b;i++)
# define _Rep(i,a,b) for(int i=a;i>=b;i--)
# define mct(a,b) memset(a,b,sizeof(a))
# define gc getchar()
typedef long long ll;
const int N=2e5+5;
const int inf=0x7fffffff;
const double eps=1e-7;
template <typename T> void read(T &x){
	x=0;int f=1;
	char c=getchar();
	for(;!isdigit(c);c=getchar())if(c=='-')f=-1;
	for(;isdigit(c);c=getchar())x=(x<<1)+(x<<3)+c-'0';
	x*=f;
}
int n,q;
int head[N],ecnt;
int cnt[N],pls[N],inde[N];

struct Edge{
	int to,next;
}e[N];

inline void add(int x,int y){
	e[++ecnt]=(Edge){y,head[x]},head[x]=ecnt;
}

inline void dfs(int u,int p){
	cnt[u]=pls[u]+p;
	for(int i=head[u];~i;i=e[i].next)
		dfs(e[i].to,p+pls[u]);
}

int main()
{
	memset(head,-1,sizeof(head));
	read(n),read(q);
	Rep(i,1,n-1){
		int x,y;
		read(x),read(y);
		add(x,y);
		inde[y]++;
	}
	Rep(i,1,q){
		int x,y;
		read(x),read(y);
		pls[x]+=y;
	}
	Rep(i,1,n)if(!inde[i]){
		dfs(i,0);
		break;
	}
	Rep(i,1,n)printf("%d ",cnt[i]);
	puts("");
	return 0;
}
