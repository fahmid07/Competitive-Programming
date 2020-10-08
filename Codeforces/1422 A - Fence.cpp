#include<bits/stdc++.h>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t, i, mx=0, mni, a, b, c, d;
    double x, z;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        mx = max(a, b);
        mx = max(c, mx);
        if(mx==a) d = abs(b-c);
        else if(mx==b) d = abs(a-c);
        else d = abs(a-b);

        x = (d*d) + (mx*mx);
        z = sqrt(x);
        x = ceil(z);
        mni = (lli)(x);
        cout << mni << endl;
    }
    return 0;
}
