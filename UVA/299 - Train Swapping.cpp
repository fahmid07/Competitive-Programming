// UVA 299 - Train Swapping

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, x, cnt;
    vector<lli> ara;

    cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            cin >> x;
            ara.push_back(x);
        }
        n = ara.size();
        cnt = 0;
        for(lli i = 0; i < n; i++){
            for(lli j = n-1; j>i; j--){
                if(ara[j] < ara[j-1]){
                    swap(ara[j], ara[j-1]);
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps." << endl;
        ara.clear();
    }
    return 0;
}
