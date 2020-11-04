// LightOj 1001 - Opposite Task

#include<stdio.h>
 
int main() {
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        n>=10? printf("%d %d\n",10,n-10) : printf("%d %d\n",n,0);
    }
    return 0;
}