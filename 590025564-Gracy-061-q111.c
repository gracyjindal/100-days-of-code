#include <stdio.h>

int main(void) {
    int n; if (scanf("%d", &n)!=1) return 0;
    int a[n]; for (int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);

    int q[n], front=0, back=0; // store indices of negatives

    for (int i=0;i<n;i++) {
        if (a[i] < 0) q[back++] = i;
        if (i >= k-1) {
            while (front < back && q[front] <= i - k) front++;
            if (front < back) printf("%d", a[q[front]]);
            else printf("0");
            if (i != n-1) printf(" ");
        }
    }
    return 0;
}