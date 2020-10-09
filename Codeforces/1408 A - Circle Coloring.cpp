// Codeforces 1408 A - Circle Coloring

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

    lli t, n, i, j, m;
    lli a[207];
    lli b[207];
    lli c[207];
    vector<lli> vec;

    cin >> t;
    while(t--){
        cin >> n;
        for(i=0; i<n; i++) cin >> a[i];
        for(i=0; i<n; i++) cin >> b[i];
        for(i=0; i<n; i++) cin >> c[i];

        vec.push_back(a[0]);
        for(i=1; i<n; i++){
            if(i==n-1){
                if(a[i]!=vec[i-1] && a[i]!=a[0]) vec.push_back(a[i]);
                else if(b[i]!=vec[i-1] && b[i]!=a[0]) vec.push_back(b[i]);
                else if(c[i]!=vec[i-1] && c[i]!=a[0]) vec.push_back(c[i]);
            }
            else{
                if(a[i]!=vec[i-1]) vec.push_back(a[i]);
                else if(b[i]!=vec[i-1]) vec.push_back(b[i]);
                else if(c[i]!=vec[i-1]) vec.push_back(c[i]);
            }
        }
        for(i=0; i<n; i++){
            if(i==n-1) cout << vec[i] << endl;
            else cout << vec[i] << " ";
        }
        vec.clear();
    }
    return 0;
}
