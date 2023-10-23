#include <stdio.h>
#include <string.h>

int main() {
    char answer[5];
    char guess[5];
    int numAttempts = 0;

    printf("請輸入 4 位數字答案：");
    scanf("%s", answer);

    while (1) {
        printf("請猜測 4 位數字（輸入 0 結束）：");
        scanf("%s", guess);

        if (strcmp(guess, "0") == 0) {
            break;
        }

        if (strlen(guess) != 4) {
            printf("請輸入 4 位數字。\n");
            continue;
        }

        int numA = 0;
        int numB = 0;

        for (int i = 0; i < 4; i++) {
            if (guess[i] == answer[i]) {
                numA++;
            } else {
                for (int j = 0; j < 4; j++) {
                    if (i != j && guess[i] == answer[j]) {
                        numB++;
                    }
                }
            }
        }

        printf("%dA%dB\n", numA, numB);
        numAttempts++;
    }

    printf("遊戲結束，共猜測 %d 次。\n", numAttempts);

    return 0;
}
