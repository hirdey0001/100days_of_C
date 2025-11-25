#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int makeCapital = 1;

    for(int i = 0; str[i] != '\0'; i++) {
        if(makeCapital && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
            makeCapital = 0;
        } else if(str[i] == ' ') {
            makeCapital = 1;
        }
    }

    printf("%s", str);
    return 0;
}
