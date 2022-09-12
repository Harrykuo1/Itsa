#include <stdio.h>
#include <string.h>


char arr[3000000];
char sliced[52000][40];

int main() {
    int card;
    char* slice;
    scanf("%d ", &card);
    for (int i = 0; i < card; i++) {
        memset(sliced, 0, sizeof(sliced));
        int count = 0;
        fgets(arr, 3000000, stdin);
        arr[strlen(arr) - 1] = '\0';//將字串的最後一個字元換成'\0'
        slice = strtok(arr, " ");
        while (slice != NULL) {//把字串切開後儲存
            strcpy(sliced[count], slice);
            slice = strtok(NULL, " ");
            count++;
        }
        for (int a = 0; a < count - 1; a++) {
            for (int b = 0; b < count - 1; b++) {
                if (sliced[b][0] < sliced[b + 1][0]) {//字母不同的要換
                    char temp[40];
                    strcpy(temp, sliced[b]);
                    strcpy(sliced[b], sliced[b + 1]);
                    strcpy(sliced[b + 1], temp);
                }
                else if (sliced[b][0] == sliced[b + 1][0]) {//字母相同的情況
                    if ((sliced[b][2] != 0) && (sliced[b + 1][2] != 0)) {//兩個數字都是二位數
                        if (sliced[b][2] < sliced[b + 1][2]) {//前面那個比後面小，就換
                            char temp[40];
                            strcpy(temp, sliced[b]);
                            strcpy(sliced[b], sliced[b + 1]);
                            strcpy(sliced[b + 1], temp);
                        }
                    }
                    else {
                        if (sliced[b + 1][2] != 0) {//後面是二位數，前面是一位數
                            char temp[40];
                            strcpy(temp, sliced[b]);
                            strcpy(sliced[b], sliced[b + 1]);
                            strcpy(sliced[b + 1], temp);
                        }
                        else if (sliced[b][2] != 0) {//如果前面是二位數，後面是一位數，就直接跳過
                            continue;
                        }
                        else {//排除前面所有可能，只剩下兩個都是一位數
                            if (sliced[b][1] < sliced[b + 1][1]) {//如果前面比後面小，就換
                                char temp[40];
                                strcpy(temp, sliced[b]);
                                strcpy(sliced[b], sliced[b + 1]);
                                strcpy(sliced[b + 1], temp);
                            }
                        }
                    }
                }
            }
        }
        printf("%s", sliced[0]);
        for (int n = 1; n < count; n++) {
            printf(" %s", sliced[n]);
        }
        printf("\n");
    }
    return 0;
}
