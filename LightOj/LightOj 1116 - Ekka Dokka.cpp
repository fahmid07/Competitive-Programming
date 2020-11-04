// LightOj 1116 - Ekka Dokka

#include <stdio.h>
#include<math.h>
 
int main()
{
    unsigned long int t, w, cr, i;
    scanf("%lu", &t);
    for(i=1;i<=t;i++){
        scanf("%lu", &w);
        if(w%2!=0) printf("Case %lu: Impossible\n", i);
        else{
            cr = w / 2;
            if(cr % 2 != 0) printf("Case %lu: %lu %lu\n", i, cr, w/cr);
            else{
                while(cr % 2 == 0){
                    cr /= 2;
                }
                printf("Case %lu: %lu %lu\n", i, cr, w/cr);
            }
        }
    }
    return 0;
}