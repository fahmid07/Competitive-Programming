// LightOj 1166 - Old Sorting

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, x, cnt, ans, min, temp;
    vector<lli> vec;
    vector<lli> ara;
    cin >> t;
    for(lli k=1; k<=t; k++){
        cin >> n;

        while(n--){
            cin >> x;
            ara.push_back(x);
        }
        cnt = 0;
        n = ara.size();
        for(lli i = 0; i < n - 1; i++){
            min = i;
            for(lli j = i + 1; j<n; j++){
                if(ara[j] < ara[min]) min = j;
            }
            if(min != i){
                temp = ara[i];
                ara[i] = ara[min];
                ara[min] = temp;
                cnt++;
            }
        }
        cout << "Case " << k << ": ";
        cout << cnt << endl;

        ara.clear();
    }
    return 0;
}
