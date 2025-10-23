//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int first, second;
    
    first = second = -1e9;  
    
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    printf("%d", second);
    return 0;
}
