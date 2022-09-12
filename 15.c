#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char arr[100000];
    char letter[30];
    memset(letter, 0, sizeof(letter));
    int letterCnt = 0;
    while (scanf("%s", arr) != EOF) {
        letterCnt++;
        for (int i = 0;i < strlen(arr);i++) {
            if (isalpha(arr[i])) {
                letter[tolower(arr[i]) - 'a']++;
            }
        }
    }
    printf("%d\n", letterCnt);
    for (int i = 0;i < 26;i++) {
        if (letter[i] != 0) {
            printf("%c : %d\n", 'a' + i, letter[i]);
        }
    }
}