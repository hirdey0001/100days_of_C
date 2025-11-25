#include <stdio.h>
#include <string.h>

int main() {
    enum role {ADMIN, USER, GUEST};
    char input[20];
    enum role r;

    printf("Enter role (ADMIN/USER/GUEST): ");
    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else
        r = GUEST;

    if (r == ADMIN)
        printf("Welcome Admin!\n");
    else if (r == USER)
        printf("Welcome User!\n");
    else
        printf("Welcome Guest!\n");

    return 0;
}
