#include <stdio.h>

void swap_adjacent(int* arr, int length) {
	   int *second_last = (arr+length)-2;
       while(arr <= second_last) {
           int temp = *arr;
      		 *arr	= *(arr+1);
           *(arr+1) = temp;
           arr = arr + 2;
       }

 }

 void swap_adjacent_v2(int* arr,  int length) {
    // for(int i=0; i<length-1; i++) {
    //     int temp = *(arr+i);
    //     *(arr+i) = *(arr+i+1);
    //     *(arr+i+1) = temp;
    // } 
    int *second_last = (arr+length)-2;
    while (arr <= second_last)
    {
        int temp = *arr;
        *arr = *(arr+1);
        *(arr+1) = temp;
        arr++;
    }
    
 }

 void print_array(int *p, int length) {
    for(int i=0; i<length; i++) {
        printf("%d,",*(p+i));
    }
    printf("\n");
 }

 int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(array)/ sizeof(array[0]);
    print_array(array, length);
    swap_adjacent_v2(array, length);
    print_array(array, length);
 }  