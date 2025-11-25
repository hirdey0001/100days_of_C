#include <stdio.h>
#include <string.h>

int main() {
    enum months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    char input[10];

    printf("Enter month (JAN/FEB/MAR/...): ");
    scanf("%s", input);

    enum months m;

    if (strcmp(input, "JAN") == 0) m = JAN;
    else if (strcmp(input, "FEB") == 0) m = FEB;
    else if (strcmp(input, "MAR") == 0) m = MAR;
    else if (strcmp(input, "APR") == 0) m = APR;
    else if (strcmp(input, "MAY") == 0) m = MAY;
    else if (strcmp(input, "JUN") == 0) m = JUN;
    else if (strcmp(input, "JUL") == 0) m = JUL;
    else if (strcmp(input, "AUG") == 0) m = AUG;
    else if (strcmp(input, "SEP") == 0) m = SEP;
    else if (strcmp(input, "OCT") == 0) m = OCT;
    else if (strcmp(input, "NOV") == 0) m = NOV;
    else m = DEC;

    if (m == FEB)
        printf("28 or 29 days\n");
    else if (m == APR || m == JUN || m == SEP || m == NOV)
        printf("30 days\n");
    else
        printf("31 days\n");

    return 0;
}
