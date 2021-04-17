// LightOJ 1042 - Secret Origins

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

void solve(){
    lli t, n, c, cc, ans;
    string s, ss;
    cin >> t;
    for(lli j=1; j<=t; j++){
        cin >> n;
        ss = bitset<64>(n).to_string();
        size_t found = ss.find("1");
        ss = ss.substr(found);
        s = "0" + ss;
        next_permutation(s.begin(), s.end());
        lli nn = bitset<64>(s).to_ullong();
        cout << "Case " << j << ": " << nn << en;
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
