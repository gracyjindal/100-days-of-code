#include <stdio.h>
int main() {
    int m, n, p, q;
    scanf("%d %d", &m, &n); 
    scanf("%d %d", &p, &q); 
    int a[m][n], b[p][q], res[m][q];
    if(n != p) {
        printf("Cannot multiply\n");
        return 0;
    }
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    for(int i=0; i<p; i++)
        for(int j=0; j<q; j++)
            scanf("%d", &b[i][j]);
   
    for(int i=0; i<m; i++)
        for(int j=0; j<q; j++) {
            res[i][j] = 0;
            for(int k=0; k<n; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}