#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = (a); i <= (b); ++i)
#define REPD(i,a,b) for (int i = (a)-1; i >= (b); --i)
#define FORR(i,n) REP(i,1,n)
#define FOR(i,n) REP(i,0,int(n)-1)
#define trav(i, b)	for (auto (i): (b))
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define ll long long
#define mem(a, x) memset((a), (x), sizeof(a))
#define sz(x) int((x).size())
#define all(a) (a).begin(), (a).end()
#define dbg(v) cerr << #v << " = " << (v) << endl;
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define fi first
#define se second
#define MAXN 1000005
#define INF 0x3f3f3f3f3f3f3f3fLL

int a[15], b[15];

int main(){
	int n, m;
	cin >> n >> m;
    for(int i=1; i<=n; i++)	cin >> a[i];
    for(int i=1; i<=m; i++)	cin >> b[i];
    int ans=0;
    for(int k=1; k<=100; k++){
        int x=1,y=1;
        for(int i=1; i<=n; i++)	if(k%a[i]) x=0;
        for(int i=1; i<=m; i++) if (b[i]%k) y=0;
        ans+=(x&y);
    }
    cout << ans;
}
