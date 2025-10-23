//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}, digit, maxDigit = 0, maxFreq = 0;
    
    scanf("%lld", &num);
    
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }
    
    printf("%d", maxDigit);
    return 0;
}
