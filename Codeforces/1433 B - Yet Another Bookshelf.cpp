// Codeforces 1433 B - Yet Another Bookshelf

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, x, j, cnt;

    cin >> t;
    while(t--){
        cin >> n;
        lli ara[107]={0};
        j = 0;
        cnt = 0;

        for(lli i=1; i<=n; i++){
            cin >> x;
            if(x==1){
                ara[j] = i;
                j++;
            }
        }

        if(j==0 || j==1) cnt = 0;
        else{
            cnt = ara[j-1] - ara[0];
            cnt -= j;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
