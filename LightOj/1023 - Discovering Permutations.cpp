// 1023 - Discovering Permutations

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
    lli n, k, t;
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> t;
    for(lli i=1; i<=t; i++){
        cin >> n >> k;
        cout << "Case " << i << ":" << en;
        string s = str.substr(0, n);
        do{
            k--;
            cout << s << en;
        }while(next_permutation(s.begin(), s.end()) && k>0);
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