// UVA 11631 - Dark roads

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
vector<pii> mst;

lli find(lli r){
    if(parent[r] == r) return r;
    parent[r] = find(parent[r]);
    return parent[r];
}

void kruskal(){
    for(auto i:graph){
        if(find(i.second.first) != find(i.second.second)){
            parent[parent[i.second.first]] = parent[parent[i.second.second]];
            //mst.push_back({i.second.first, i.second.second});
            cnt += i.first;
        }
    }
}

void solve(){
    while(true){
        cin >> n >> e;
        if(n==0 && e==0) break;
        lli sum = 0;
        for(int i=0; i<=10007; i++) parent[i] = i;
        for(lli i=1; i<=e; i++){
            cin >> x >> y >> c;
            graph.push_back({c, {x, y}});
            sum += c;
        }

        SORT(graph);
        cnt = 0;
        kruskal();

        cout << sum-cnt << en;

        graph.clear();
    }

}
int main()
{
    FAST
    solve();
    return 0;
}
