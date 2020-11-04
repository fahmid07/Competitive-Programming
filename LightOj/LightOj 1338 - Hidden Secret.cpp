// LightOj 1338 - Hidden Secret!

#include <bits/stdc++.h>
using namespace std;
#include<math.h>
#include<stdlib.h>
typedef long long int ll;
 
int main()
{
    int x, l1, l2, l, j, i;
    ll c1=0, c2=0;
    ll flag=0, k, d;
    char str[10001], str2[10001];
    scanf("%d", &x);
    getchar();
    for(i=0;i<x;i++){
        scanf("%[^\n]%*c", &str);
        scanf("%[^\n]%*c", &str2);
        flag = 0;
        c1 = 0;
        c2 = 0;
        l1 = strlen(str);
        l2 = strlen(str2);
        for(j=0;j<l1;j++){
            str[j] = tolower(str[j]);
            if (str[j] != ' ') str[c1++] = str[j];
        }
        str[c1] = '\0';
        for(j=0;j<l2;j++){
            str2[j] = tolower(str2[j]);
            if (str2[j] != ' ') str2[c2++] = str2[j];
        }
        str2[c2] = '\0';
        sort(str,str+c1);
        sort(str2,str2+c2);
        k = strcmp(str,str2);
        if(k==0) printf("Case %d: Yes\n", i+1);
        else printf("Case %d: No\n", i+1);
    }
    return 0;
}