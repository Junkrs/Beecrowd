//Bee 2630 - Greyscale 

#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int casos, i, R, G, B;
    char tipo[4];
    float olho;
    scanf("%d", &casos);
    for (i = 0; i < casos; i++) {
        olho = 0;
        scanf("%s", tipo);
        scanf("%d %d %d", &R, &G, &B);
        if (strcmp(tipo, "max") == 0) {
           if ((R > G && R > B) || (R == G && R > B) || (R == B && R > G)) {
                printf("Caso #%d: %d\n", (i + 1), R);
            } else if ((G > R && G > B) || (G == R && G > B) || (G == B && G > R)) {
                printf("Caso #%d: %d\n", (i + 1), G);
            } else if ((B > G && B > R) || (B == G && B > R) || (B == R && B > G)) {
                printf("Caso #%d: %d\n", (i + 1), B);
            } 
        } else if (strcmp(tipo, "min") == 0) {
            if ((R < G && R < B) || (R == G && R < B) || (R == B && R < G)) {
                printf("Caso #%d: %d\n", (i + 1), R);
            } else if ((G < R && G < B) || (G == R && G < B) || (G == B && G < R)) {
                printf("Caso #%d: %d\n", (i + 1), G);
            } else if ((B < G && B < R) || (B == G && B < R) || (B == R && B < G)) {
                printf("Caso #%d: %d\n", (i + 1), B);
            }
        } else if (strcmp(tipo, "mean") == 0) {
            printf("Caso #%d: %d\n", (i + 1), (R + G + B) / 3);
        } else if (strcmp(tipo, "eye") == 0) {
            olho = (0.30 * R) + (0.59 * G) + (0.11 * B);
            printf("Caso #%d: %.0f\n", (i + 1), floor(olho));
        }
    }
    return 0;
}