#include <stdio.h>
int main() {
    int array[10];
   
    printf("Enter 10 integers:\n");
  
    for (int i =0; i<10; i++) {
        printf("Enter element %d",i+1);
        scanf("%d",&array[i]);
    }
    
    for (int i=0; i<10; i++) {
        printf("%d\n", array[i]);
    }
}

// int array1[5];       1,2,3,4,5
// int array2[5];       10,20,30,40,50
// int array_sum[5];    11,22,33,44,55