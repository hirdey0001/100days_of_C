//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    lcm = (num1 * num2) / gcd;

    printf("%d\n", lcm);

    return 0;
}
