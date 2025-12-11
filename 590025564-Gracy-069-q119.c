#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n; if (scanf("%d",&n)!=1) return 0;
    int *a = malloc(n*sizeof(int));
    for (int i=0;i<n;i++) scanf("%d",&a[i]);

    for (int i=0;i<n;i++){
        int v = abs(a[i]);
        if (a[v] < 0) { printf("%d", v); free(a); return 0; }
        a[v] = -a[v];
    }

    printf("-1");
    free(a);
    return 0;
}