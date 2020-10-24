// Codeforces 1433 C - Dominant Piranha

#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, x, mx, indx;
    set<lli> s;
    vector<lli> vec;

    cin >> t;
    while(t--){
        cin >> n;

        while(n--){
            cin >> x;
            vec.push_back(x);
            s.insert(x);
        }

        n = vec.size();
        mx = vec[0];
        indx = 0;

        for(lli i=1; i<n-1; i++){
            if(vec[i]>=mx && (vec[i]>vec[i-1] || vec[i]>vec[i+1])){
                mx = vec[i];
                indx = i;
            }
        }

        if(vec[n-1]>=mx && (vec[n-1]>vec[n-2])) indx = n-1;

        if(s.size()==1) cout << -1 << endl;
        else cout << indx+1 << endl;

        vec.clear();
        s.clear();
    }
    return 0;
}
