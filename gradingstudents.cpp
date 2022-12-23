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

int a[65];

int main(){
	int n; cin >> n;
	FOR(i, n)	cin >> a[i];
	vector<int> mult;
	int k=5;
	while(k<=100){
		mult.pb(k);
		k+=5;
	}
	FOR(i, n){
		int cur=a[i];
		if(cur<38)	continue;
		for(int j=0; j<sz(mult); j++){
			if(mult[j]-cur<3 && mult[j]-cur>0){
				a[i]=mult[j];
				break;
			}
		}
	}
	FOR(i, n)	cout << a[i] << endl;
}
