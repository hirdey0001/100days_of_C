//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;
    char monthStr[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    scanf("%s", date);   
    
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    
    printf("%02d-%s-%d", day, monthStr[month - 1], year);
    
    return 0;
}
