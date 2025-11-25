#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 1;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    return 0;
}
