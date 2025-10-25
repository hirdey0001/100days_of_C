//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int maxLen = 0, len = 0, j = 0;
    
    scanf("%[^\n]s", str);  
    
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;  
        }
        if (str[i] == '\0')
            break;
    }
    
    printf("%s", longest);
    return 0;
}
