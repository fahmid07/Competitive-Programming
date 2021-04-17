// UVA 10507 - Waking up brain

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"

int convert(char ch){
    int d = (int)(ch);
    d -= 65;
    return d;
}

void solve(){
    lli n, q, d, m, f;
    string s, x;
    while(cin >> n){
        cin >> q;
        cin >> s;
        vi graph[100];
        lli vis = 0;
        lli c = 0;
        int visited[100]={0};
        vis += s.size();
        for(auto i:s){
            d = convert(i);
            visited[d] = 4;
        }
        while(q--){
            cin >> x;
            d = convert(x[0]);
            m = convert(x[1]);
            graph[d].pb(m);
            graph[m].pb(d);
        }
        d = convert(s[0]);
        queue<lli> q;
        q.push(d);
        d = convert(s[1]);
        q.push(d);
        d = convert(s[2]);
        q.push(d);
        while(!q.empty()){
            int xx = q.front();
            q.pop();
            f = 0;
            for(int i=0; i<graph[xx].size(); i++){
                visited[graph[xx][i]]++;
                if(visited[graph[xx][i]]==3){
                    f++;
                    vis++;
                    q.push(graph[xx][i]);
                }
            }
            if(f!=0) c++;
        }
        if(vis!=n) cout << "THIS BRAIN NEVER WAKES UP" << en;
        else cout << "WAKE UP IN, " <<  c << ", YEARS" << en;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
