#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch)) {
            if (!inWord) {
                inWord = 1;
                words++;
            }
        } else {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
