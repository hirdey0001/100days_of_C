#include <stdio.h>

int main() {
    char filename[50];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
