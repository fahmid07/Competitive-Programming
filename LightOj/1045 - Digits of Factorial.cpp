// LightOj 1045 - Digits of Factorial

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long int lli;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, b, ans;

    cin >> t;
    for(lli i=1; i<=t; i++){
        cin >> n >> b;
        if(n<0) ans = -1;
        else if(n<=1) ans = 0;
        else ans = ((n * log10(n / M_E) +  log10(2 * M_PI * n) / 2.0)) / (log10(b));
        cout << "Case" << " " << i << ": " << ans+1 << endl;

    }
    return 0;
}
