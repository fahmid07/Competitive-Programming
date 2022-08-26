// UVA 1208 - Oreon

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long ul;

#define pii  pair<lli, lli>
#define PI acos(-1.0)
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define YES cout << "YES" << "\n";
#define NO cout << "NO" << "\n";
#define yes cout << "Yes" << "\n";
#define no cout << "No" << "\n";
#define mnp cout << "-1" << "\n";
#define en "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define SORT(vec) sort(vec.begin(),vec.end())
#define CLR(vec) vec.clear()
#define REV(vec) reverse(vec.begin(),vec.end())
#define min3(a,b,c) min(a,min(b,c))

lli n, s, e, t, x, y, c, q, cnt = 0;

vector<pair<lli, pii>> graph;
lli parent[10007];
vector<pair<lli, pii>> mst;

lli find(lli r){
    if(parent[r] == r) return r;
    parent[r] = find(parent[r]);
    return parent[r];
}

void kruskal(){
    for(auto i:graph){
        if(find(i.second.first) != find(i.second.second)){
            parent[parent[i.second.first]] = parent[parent[i.second.second]];
            mst.push_back({i.first, {i.second.first, i.second.second}});
        }
    }
}

void solve(){
    string s;
    cin >> t;
    for(lli q=1; q<=t; q++){
        cin >> n;
        for(int i=0; i<=10007; i++) parent[i] = i;
        for(lli i=1; i<=n; i++){
            for(lli j=1; j<=n; j++){
                if(j!=n) cin >> c >> s;
                else cin >> c;
                if(i==j || c==0) continue;
                graph.push_back({c, {i, j}});
            }
        }

        SORT(graph);
        kruskal();

        cout << "Case " << q << ":" << en;
        for(auto it:mst){
            cout << (char)(it.second.first+'A'-1);
            cout << "-";
            cout << (char)(it.second.second+'A'-1);
            cout << " ";
            cout << it.first << en;
        }

        graph.clear();
        mst.clear();
    }

}
int main()
{
    FAST
    solve();
    return 0;
}
