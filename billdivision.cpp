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



int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int y, z;
        if(i==k)    cin >> y;
        else{
            cin >> z;
            a.push_back(z);
        }
    }    
    int x;
    cin >> x;    
    int sum=0;
    for(auto i: a){
        sum+=i;
    }
    if(sum/2==x){
        cout << "Bon Appetit";
    }
    else    cout << abs(sum/2-x);
}

