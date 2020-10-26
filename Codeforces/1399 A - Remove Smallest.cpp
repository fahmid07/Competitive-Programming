// Codeforces 1399 A - Remove Smallest

#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
#include<stdlib.h>
using namespace std;
typedef long long int lli;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t , n, i, m, mn, mnn, cnt, a, b, z, f;
    double x;
    vector<lli> vec;
    cin >> t;
    while(t--){
        cin >> n;
        m = n;
        while(m--){
            cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end());
        f = 0;
        for(i=0; i<n-1; i++){
            x = abs(vec[i]-vec[i+1]);
            z = (lli)(x);
            if(z>1){
                f = 1;
                break;
            }
        }
        if(f==0) cout << "YES" << endl;
        else cout << "NO" << endl;
        vec.clear();
    }
    return 0;
}