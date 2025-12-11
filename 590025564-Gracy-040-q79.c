#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
    
    for(int row=0; row<m; row++) {
        int i=row, j=0;
        while(i>=0 && j<n) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }
    
    for(int col=1; col<n; col++) {
        int i=m-1, j=col;
        while(i>=0 && j<n) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }
    printf("\n");
    return 0;
}