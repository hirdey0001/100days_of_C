//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2, temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);  

    return 0;
}
