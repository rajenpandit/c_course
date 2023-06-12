 // [3,2,5,4]
 // 3>2 ? [2,3,5,4]
 // 3>5 ? false
 // 5>4 ? [2,3,4,5]

 // [4,2,5,1,7,9,8,6,5]
 // 4>2 ? [2,4,5,1,7,9,8,6,5]
 // 4>5 ? 
 // 5>1 ? [2,4,1,5,7,9,8,6,5]
 // 5>7
 // 7>9
 // 9>8 ? [2,4,1,5,7,8,9,6,5]
 // 9>6 ? [2,4,1,5,7,8,6,9,5]
 // 9>5 ? [2,4,1,5,7,8,6,5,9]

 // next iteration => n-1
 // [2,4,1,5,7,8,6,5,9]
 // 2>4
 // 4>1 ? [2,1,4,5,7,8,6,5,9]
 // 4>5
 // 5>7
 // 7>8
 // 8>6 ? [2,1,4,5,7,6,8,5,9]
 // 8>5 ? [2,1,4,5,7,6,5,8,9]

#include <stdio.h>
 void swap(int *elem1, int* elem2) {
    int temp = *elem1;
    *elem1 = *elem2;
    *elem2 = temp;
 }

 void bubble_sort(int* start_p, int length) {

    for(int j=0; j<length-1; j++) {

        // length-1 times
        // length-2 times
        // length-3
        // length-(length-1) => 1
        for(int i=0; i<length-(j+1); i++) {
            // check if i(th) element is greater than i+1(th) element
            if(*(start_p+i) > *(start_p+i+1)) {
                swap(start_p+i, start_p+i+1);
            }
        }
    }

 }

 int main() 
{
    int arr[] = {4,3,5,6,40,1,20,6,8,9,4,6,3,1};
    int length = sizeof(arr)/sizeof(int); /// sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, length);
    for(int i=0; i<length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}