#include <stdio.h>
#include <string.h>

int main() {
    enum Gender {MALE, FEMALE, OTHER};

    struct Person {
        char name[50];
        enum Gender gender;
    } p;

    char input[10];

    printf("Enter gender (MALE/FEMALE/OTHER): ");
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    if (p.gender == MALE)
        printf("Male\n");
    else if (p.gender == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}
