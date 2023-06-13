#include "../utils/swap.h"
#include <stdio.h>
void selection_sort(int* arr, int length) {
    int* element_p = arr;
    for(int j=0; j<length; j++) {
        int min_index=j;
        for(int i=j+1; i<length; i++)
        {
            // if(arr[j] > arr[i])
            if(*(arr+j) > *(arr+i)){
                if(*(arr+min_index) >  *(arr+i))
                {
                    min_index = i;
                }
            }
        }
        if(min_index>j) {
            swap(arr+j, arr+min_index);
        }
    }

}

// [20,1,3,21,90,45,10,2]
int main() {
    int arr[]={20,1,3,21,90,45,10,2};
    int length = sizeof(arr)/sizeof(int);
    selection_sort(arr, length);
    for(int i=0; i<length; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}



