//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[200];
    char *words[50];
    int count = 0;

    scanf("%[^\n]s", line);

    char *token = strtok(line, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    if (count >= 1) {
        for (int i = 0; i < count - 1; i++) {
            if (words[i][0] != '\0') {
                printf("%c.", toupper(words[i][0]));
            }
        }
        printf(" %s", words[count - 1]);
    }

    return 0;
}
