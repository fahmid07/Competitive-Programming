// Spoj NHAY - A Needle in the Haystack

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long ul;
 
#define pii  pair<lli, lli>
#define PI acos(-1.0)
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
const lli N = 2000007;
const lli A = 1000000021;
const lli B = 29;
const lli AA = 1e9+7;
const lli BB = 137;
 
lli pw[N];
lli pww[N];
 
void power_calculate(){
    pw[0] = 1;
    for (lli i = 1; i < N; i++) pw[i] = (pw[i-1] * B) % A;
}
 
 
void hash_calculate(lli h[], string s){
    h[0] = 0;
    for (lli i = 0; i < s.size(); i++) h[i+1] = (h[i] + (s[i] - 'a' + 1) * pw[i]) % A;
}
 
void solve(){
    lli t, n, k;
    string s, p;
    power_calculate();
 
    while(cin >> t){
        //if(t==0) break;
        cin >> s >> p;
        k = s.size();
        string z = s+p;
        n = z.size();
        lli h[n+2]={0};
        hash_calculate(h, z);
 
        lli l = (h[0 + k] + A - h[0]) % A;
        l = (l * pw[n-0-1]) % A;
        lli c = 0;
        for (lli i = k; i <= n - k; i++) {
             lli cr = (h[i + k] + A - h[i]) % A;
             cr = (cr * pw[n-i-1]) % A;
 
             if(cr == l){
                cout << i-k << en;
                c++;
             }
        }
        if(c==0) cout << en;
    }
}
 
int main()
{
    FAST
    solve();
    return 0;
}