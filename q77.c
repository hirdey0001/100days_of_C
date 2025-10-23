//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int n, m, i, j, distinct = 1;
    
    scanf("%d %d", &n, &m);
    
    int matrix[n][m];
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    if (n != m) {
        printf("False");
        return 0;
    }
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }
    
    if (distinct)
        printf("True");
    else
        printf("False");
    
    return 0;
}
