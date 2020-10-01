#include <stdio.h>
#include<math.h>
int main()
{
    unsigned long int t, w, cr, i;
    while(scanf("%lu", &t)==1){
        if(t==0) break;
        w = sqrt(t);
        if(t==(w*w)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
