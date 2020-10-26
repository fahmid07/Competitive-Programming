// Codeforces 1435 A - Finding Sasuke

#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, x;
    vector<lli> vec;

    cin >> t;
    while(t--){
        cin >> n;

        while(n--){
            cin >> x;
            vec.push_back(x);
        }

        n = vec.size();

        for(lli i=0; i<n; i++){
            x = vec[n-i-1];
            if(i<n/2){
                if(vec[i]<0){
                    if(x<0) cout << x*(-1);
                    else cout << x;
                }
                else{
                    if(x>=0) cout << x*(-1);
                    else cout << x;
                }
            }
            else{
                if(vec[i]<0){
                    if(x>=0) cout << x*(-1);
                    else cout << x;
                }
                else{
                    if(x<0) cout << x*(-1);
                    else cout << x;
                }
            }

            if(i==n-1) cout << endl;
            else cout << " ";
        }

        vec.clear();
    }
    return 0;
}
