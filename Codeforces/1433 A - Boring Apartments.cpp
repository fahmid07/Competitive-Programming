// Codeforces 1433 A - Boring Apartments

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, d, l, a;
    cin >> t;
    while(t--){
        cin >> n;
        d = log10(n) + 1;
        l = n % 10;
        a = (l-1) * 10;
        a += ((d*(d+1)) / 2 );
        cout << a << endl;
    }
    return 0;
}
