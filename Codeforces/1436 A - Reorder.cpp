// Codeforces 1436 A - Reorder

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, x, m, sum;

    cin >> t;
    while(t--){
        cin >> n >> m;
        sum = 0;

        while(n--){
            cin >> x;
            sum += x;
        }
        if(sum == m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
