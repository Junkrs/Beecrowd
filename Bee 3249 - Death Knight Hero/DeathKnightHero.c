//Bee 3249 - Death Knight Hero

#include <stdio.h>
#include <string.h>
int main() {
    int n, i, ataque[1000], perda = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", ataque);
        if (strstr(ataque, "CD") != NULL) {
            perda++;
        }
    }
    printf("%d\n", n - perda);
    return 0;
}