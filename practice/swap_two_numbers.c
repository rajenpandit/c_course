#include<stdio.h>

void swap(int *p, int *q) {
    int old_val = *p;
    *p = *q;
    *q = old_val;
}

int main() {
    int x=2;
    int y=5;
    
    printf("x:%d, y:%d\n", x, y);
    swap(&x,&y);
    printf("x:%d, y:%d\n", x, y);
}

// [1,2,3,4,5,6,7,8,9,10]
// swap(start_p, size) {
    // swap adjecent numbers
//}
