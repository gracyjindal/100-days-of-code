#include <stdio.h>
int main() {
    int n, i, j, is_distinct = 1;
    scanf("%d", &n);
    int matrix[n][n], diag[n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
   
    for(i = 0; i < n; i++)
        diag[i] = matrix[i][i];
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                is_distinct = 0;
                break;
            }
        }
        if(!is_distinct) break;
    }
    if(is_distinct)
        printf("Distinct\n");
    else
        printf("Not Distinct\n");
    return 0;
}