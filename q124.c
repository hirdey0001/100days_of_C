#include <stdio.h>

int main() {
    char source[50], dest[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fs = fopen(source, "r");
    if (fs == NULL) {
        printf("Source file not found.\n");
        return 1;
    }

    FILE *fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Could not create destination file.\n");
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s\n", dest);

    return 0;
}
