#include <stdio.h>
int main() {
    int n, i, j, flag = 1;
    scanf("%d", &n);
    int matrix[n][n];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &matrix[i][j]);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
    if(flag)
        printf("Symmetric\n");
    else
        printf("Not Symmetric\n");
    return 0;
}