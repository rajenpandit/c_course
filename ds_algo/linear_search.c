#include <stdio.h>

int main() {

    int numbers[] = {1,4,3,5,6,67,2,23,7};
    //binary search => {1,2,3,5,6,67,68,93,97};  find 5;
    // linear...
    int n;
    printf("Enter a number to search\n");
    scanf("%d", &n);
    int loc = -1;
    for(int i=0; i<sizeof(numbers)/sizeof(int); i++) {
        if(numbers[i] == n) {
            loc = i;
        }
    }

    if(loc > -1) {
        printf("Number found at index:%d\n", loc);
    }
    else {
        printf("Number not found\n");
    }
}