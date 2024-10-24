#include <stdio.h>

int main() {
    int i, j;
    printf("(a)\n");
    for (i = 1; i <= 10; ++i) {
        for (j = 1; j <= i; ++j)
            printf("*");
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("(b)\n");
    for (i = 10; i >= 1; --i) {
        for (j = 1; j <= i; ++j)
            printf("*");
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("(c)\n");
    for (i = 10; i >= 1; --i) {
        for (j = 1; j <= 10 - i; ++j)
            printf(" ");
        for (j = 1; j <= i; ++j)
            printf("*");
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("(d)\n");
    for (i = 1; i <= 10; ++i) {
        for (j = 1; j <= 10 - i; ++j)
            printf(" ");
        for (j = 1; j <= i; ++j)
            printf("*");
        printf("\n");
    }
    return 0;
}
