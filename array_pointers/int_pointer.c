
// [1,2,3,4,5,6,7,8,9,10]
// sum of all the elements.

#include <stdio.h>
//
// int => signed int (default) =>  -max_int -> 0 -> +max_int
// unsigned int;

// signed byte / unsigned bye; => 8-bit => 2^8  => (0 to 127) Positive , (0 to 127) Negative
// -max_byte(-127) -> 0 -> +max_byte(+127)
// unsigned byte => 0 -> 256 (+max_byte = 256)  

typedef unsigned int  array_size; 

int sumOfArray(int *p, array_size size ) {
    int sum=0;
    for(int i=0; i<size; i++) {
        sum = sum + *(p+i);
    }
    return sum;
}

int sumOfArray2(int *start_p, int *end_p) {
    printf("start_p:%p end_p:%p\n", start_p, end_p);
    int sum=0;
    while(start_p < end_p) {
        sum = sum + (*start_p);
        start_p = start_p + 1; 
        // start_p++
        // start_p += 1;
    }
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    array_size size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfArray(arr,size);
    printf("Sum:%d\n", sum);
    sum = sumOfArray2(arr,arr+size);
    printf("Sum:%d\n", sum);
}