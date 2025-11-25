#include <stdio.h>

int main() {
    char line[100];
    FILE *fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
