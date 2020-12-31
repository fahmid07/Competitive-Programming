// UVA 11776 - Oh Your Royal Greediness!

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair

bool cmp(const pii &v1, const pii &v2)
{
    if(v1.first == v2.first) return v1.second > v2.second;
    else return v1.first < v2.first;
}

void solve(){
    lli n, x, y, mx, cnt, pr;
    vector<pii> ara;
    pii q;
    for(lli j=1; ; j++){
        cin >> n;
        if(n==-1) break;
        for(lli i = 0; i<n; i++){
            cin >> x >> y;
            ara.pb(mp(x, 1));
            ara.pb(mp(y, -1));
        }
        sort(ara.begin(), ara.end(), cmp);

        mx = 0;
        cnt = 0;
        for(lli i=0; i<ara.size(); i++){
            cnt += ara[i].second;
            mx = max(mx, cnt);
        }

        cout << "Case " << j << ": " << mx << endl;
        ara.clear();
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
