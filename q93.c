//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }
    
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }
    
    printf("Anagrams");
    return 0;
}
