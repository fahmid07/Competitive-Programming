// UVA 1121 - Subsequence

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, x, k, sum, i, j, mn;
    vector<lli> vec;

    while(cin >> n >> k){
        while(n--){
            cin >> x;
            vec.push_back(x);
        }
        n = vec.size();
        i = 0;
        j = 0;
        sum = 0;
        mn = INT_MAX;
        while(i<=j && i<n && j<n){
            sum += vec[j];
            j++;
            while(sum >= k){
                mn = min(mn, j-i);
                sum -= vec[i];
                i++;
            }
        }
        if(mn==INT_MAX) cout << 0 << endl;
        else cout << mn << endl;
        vec.clear();
    }
    return 0;
}
