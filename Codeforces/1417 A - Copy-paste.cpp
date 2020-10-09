// Codeforces 1417 A - Copy-paste

#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, i, k, x, cnt, r, d;
    vector<lli> vec;

    cin >> t;
    while(t--){
        cin >> n >> k;
        cnt = 0;
        for(i=0; i<n; i++){
            cin >> x;
            vec.push_back(x);
        }

        sort(vec.begin(), vec.end());
        for(i=1; i<n; i++){
            r = 0;
            if(k>vec[i]) r = k - vec[i];
            d = r / vec[0];
            cnt += d;
        }
        cout << cnt << endl;
        vec.clear();
    }
    return 0;
}
