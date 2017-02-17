#include <stdio.h>
#include "../../include/sum.h"

int main(void) {
    int a = 0;
    int b = 0;
    puts("input two numbers ");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d", a, b, sum(a, b));
    return 0;
}
