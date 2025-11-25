#include <stdio.h>
#include <string.h>

int main() {
    enum status {SUCCESS, FAILURE, TIMEOUT};
    char input[20];
    enum status s;

    printf("Enter status (SUCCESS/FAILURE/TIMEOUT): ");
    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
        s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        s = FAILURE;
    else
        s = TIMEOUT;

    if (s == SUCCESS)
        printf("Operation successful\n");
    else if (s == FAILURE)
        printf("Operation failed\n");
    else
        printf("Operation timed out\n");

    return 0;
}
