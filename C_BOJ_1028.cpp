#include <stdio.h>
enum { rb, lb };
int Row, Col, D[752][752][2];
 
int main(void) {
    int i, j, res = 0, t;
    scanf("%d %d\n", &Row, &Col);
    for (i = 1; i <= Row; i++) {
        for (j = 1; j <= Col; j++)
            D[i][j][rb] = D[i][j][lb] = getchar() - '0';
        getchar();
    }
    for (i = Row - 1; i >= 1; i--) {
        for (j = 1; j <= Col; j++) {
            D[i][j][rb] *= 1 + D[i + 1][j + 1][rb];
            D[i][j][lb] *= 1 + D[i + 1][j - 1][lb];
        }
    }
    for (i = 1; i <= Row; i++) {
        for (j = 1; j <= Col; j++) {
            for (t = D[i][j][lb] - 1; t >= res; t--)
                if (D[i][j][rb] >= t + 1 && D[i + t][j - t][rb] >= t + 1 && D[i + t][j + t][lb] >= t + 1)
                    res = t + 1;
        }
    }
    printf("%d\n", res);
    return 0;
}
