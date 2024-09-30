//Bee 2868 - Wrrrong!

#include <stdio.h>
int main() {
    int C, i, n1, n2, resp, respCerta, dist, j;
    char op;
    scanf("%d", &C);
    for (i = 0; i < C; i++) {
        scanf("%d %c %d = %d", &n1, &op, &n2, &resp);
        if (op == '+') {
            respCerta = (n1 + n2);
        } else if (op == '-') {
            respCerta = (n1 - n2);
        } else if (op == 'x') {
            respCerta = (n1 * n2); 
        }
        if (respCerta > resp) {
            dist = respCerta - resp;
            printf("E");
            for (j = 0; j < dist; j++) {
                printf("r");
            }
            printf("ou!\n");
        } else if (resp > respCerta) {
            dist = resp - respCerta;
            printf("E");
            for (j = 0; j < dist; j++) {
                printf("r");
            }
            printf("ou!\n");
        }
    }
    return 0;
}