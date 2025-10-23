// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main() {
    int n, m, i, j, sum = 0;
    
    scanf("%d %d", &n, &m);
    
    int matrix[n][m];
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    if (n != m) {
        printf("Not a square matrix");
        return 0;
    }
    
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    
    printf("%d", sum);
    
    return 0;
}
