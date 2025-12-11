#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    int x=*(const int*)a, y=*(const int*)b;
    return (x>y) - (x<y);
}

int main(void){
    int n; if (scanf("%d",&n)!=1) return 0;
    int *a = malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);
    qsort(a,n,sizeof(int),cmp);
    if (k>=1 && k<=n) printf("%d", a[k-1]);
    free(a);
    return 0;
}