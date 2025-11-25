#include <stdio.h>
#include <string.h>

int main() {
    enum light {RED, YELLOW, GREEN};
    char input[10];

    printf("Enter traffic light (RED/YELLOW/GREEN): ");
    scanf("%s", input);

    enum light signal;

    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else
        signal = GREEN;

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else
        printf("Go\n");

    return 0;
}
