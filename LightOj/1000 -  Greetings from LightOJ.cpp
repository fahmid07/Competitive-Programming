// LightOj 1000 - Greetings from LightOJ

#include <stdio.h>
 
int main() {
	int t, i;
	long long int a , b;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
	scanf("%lld%lld", &a,&b);
	printf("Case %d: %lld\n", i, a+b);
	}
	return 0;
}
