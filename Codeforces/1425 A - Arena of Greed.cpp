// Codeforces 1425 A - Arena of Greed

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, i, cnt;

    cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        i = 1;
        while(n!=0){
            if(n%2==0){
                if((n/2)%2 == 0 && n>4){
                    if(i%2==1) cnt++;
                    n--;
                }
                else{
                    if(i%2==1) cnt += (n/2);
                    n /= 2;
                }
            }
            else{
                if(i%2==1) cnt++;
                n--;
            }
            i++;
        }
        cout << cnt << endl;
    }
    return 0;
}
