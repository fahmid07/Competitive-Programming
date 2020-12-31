// UVA 12640 - Largest Sum Game

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair

void solve(){
    lli t, n, sum, mx, x, mn, exit;
    char ch;
    vi vec;
    vi csum;
    while(true){
        sum = 0;
        while(true){
            exit = scanf("%lld%c", &x, &ch);
            if (exit == -1) break;
            sum += x;
            vec.pb(x);
            csum.pb(sum);
            if(ch=='\n') break;
        }
        if (exit == -1) break;
        n = vec.size();
        mn = INT_MAX;
        mx = mn * (-1);
        sum = 0;
        for(lli i=0; i<n; i++){
            if(i==0 || mn>=0) sum = csum[i];
            else sum = csum[i] - mn;

            mx = max(mx, sum);
            mn = min(mn, csum[i]);
        }
        if(mx<0) mx = 0;
        printf("%lld\n", mx);
        vec.clear();
        csum.clear();
    }
}

int main()
{
    solve();
    return 0;
}
