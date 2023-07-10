
#include <stdio.h>
#include "../utils/swap.h"

int sum(int x, int y) {
    return x+y;
}

int main() {
    int x=10;
    int y=20;
    swap(&x, &y);

    printf("x:%d y:%d", x, y);
}