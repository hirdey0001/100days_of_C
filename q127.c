#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    char ch;

    if (fin == NULL) {
        printf("input.txt not found.\n");
        return 1;
    }

    if (fout == NULL) {
        printf("Could not create output.txt.\n");
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion complete. Output written to output.txt\n");

    return 0;
}
