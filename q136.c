#include <stdio.h>
#include <string.h>

int main() {
    enum menu {ADD, SUBTRACT, MULTIPLY};
    char op[20];
    int a, b;
    enum menu choice;

    printf("Enter operation (ADD/SUBTRACT/MULTIPLY): ");
    scanf("%s", op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
