// Codeforces 1399 B - Gifts Fixing

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
    lli t , n, i, m, mn, mnn, cnt, a, b, z, x;
    vector<lli> vec;
    vector<lli> vec2;
    cin >> t;
    while(t--){
        cin >> n;
        m = n;
        mn = INT_MAX;
        mnn = INT_MAX;
        cnt = 0;
        while(m--){
            cin >> x;
            vec.push_back(x);
            mn = min(mn, x);
        }
        m = n;
        while(m--){
            cin >> x;
            vec2.push_back(x);
            mnn = min(mnn, x);
        }
        for(i=0; i<n; i++){
            a = 0;
            b = 0;
            if(vec[i]>mn){
                a = vec[i] - mn;
            }
            if(vec2[i]>mnn){
                b = vec2[i] - mnn;
            }
            z = min(a, b);
            cnt += z;
            if(z==a) cnt += (b-z);
            else cnt += (a-z);
        }
        cout << cnt << endl;
        vec.clear();
        vec2.clear();
    }
    return 0;
}