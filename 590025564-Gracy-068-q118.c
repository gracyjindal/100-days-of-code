#include <stdio.h>

int main(void){
    int n; if (scanf("%d",&n)!=1) return 0;
    long long sum=0;
    for (int i=0,x;i<n;i++){ scanf("%d",&x); sum += x; }
    long long expected = (long long)n*(n+1)/2;
    printf("%lld", expected - sum);
    return 0;
}