#include <stdio.h>
#include <stdlib.h>

typedef struct { int val, idx; } P;
int cmpP(const void* a, const void* b){
    const P *x=a, *y=b;
    if (x->val!=y->val) return (x->val>y->val)-(x->val<y->val);
    return x->idx - y->idx;
}

int main(void){
    int n; if (scanf("%d",&n)!=1) return 0;
    P *arr = malloc(n*sizeof(P));
    for (int i=0;i<n;i++){ scanf("%d",&arr[i].val); arr[i].idx=i; }
    int target; scanf("%d",&target);
    qsort(arr,n,sizeof(P),cmpP);
    int l=0, r=n-1;
    while (l<r){
        long long s = (long long)arr[l].val + arr[r].val;
        if (s==target){ printf("%d %d", arr[l].idx, arr[r].idx); free(arr); return 0; }
        if (s<target) l++; else r--;
    }
    printf("-1 -1");
    free(arr);
    return 0;
}