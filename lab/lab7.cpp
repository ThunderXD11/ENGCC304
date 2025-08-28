#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, score, playAgain;

    srand(time(NULL));

    do {
        number = rand() % 100 + 1;
        score = 100;

        printf("เกมทายตัวเลข (1-100)\n");
        printf("คุณมีคะแนนเริ่มต้น 100 คะแนน\n");

        while (1) {
            printf("กรอกตัวเลขที่คุณทาย: ");
            scanf("%d", &guess);

            if (guess == number) {
                printf("ถูกต้อง! เลขคือ %d\n", number);
                printf("คะแนนของคุณ: %d\n", score);
                break;
            } else {
                score -= 10;
                if (guess > number) {
                    printf("มากเกินไป! ");
                } else {
                    printf("น้อยเกินไป! ");
                }
                printf("คะแนนปัจจุบัน: %d\n", score);

                if (score <= 0) {
                    printf("คุณแพ้! คะแนนหมดแล้ว\n");
                    printf("เลขที่ถูกต้องคือ %d\n", number);
                    break;
                }
            }
        }

        printf("ต้องการเล่นอีกครั้งหรือไม่? (1 = เล่นใหม่, -1 = ออก): ");
        scanf("%d", &playAgain);

    } while (playAgain == 1);

    printf("ขอบคุณที่เล่นเกม!\n");
    return 0;
}
