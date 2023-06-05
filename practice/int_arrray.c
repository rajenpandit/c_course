#include <stdio.h>
#include <unistd.h>
int main() 
{
    int array[5];
    // array[0]=1;
    // array[1]=2;
    // array[2]=3;
    // array[3]=4;
    // array[4]=5;

    // array[0]=0;
    // array[1]=5;
    // array[2]=10;
    // array[3]=15;
    // array[4]=20;

    for(int i=0; i<5; i++) {
        // value of i = 0 to 4
        array[i] = i * 5;
    }
        
    // 0+1 - 4+1
    // 1 - 5

   //Print the array elements
   for (int i =0; i<5; i++){ 
        // printf("%d ", array[i]);
        // printf("array[%d]=%d\n", i, (array[i]*2) + 1);
        int x = (array[i]*2) + 1;
        printf("array[%d]=%d\n", i, x);
   }
    printf("_________________________________\n");
    // print in reverse order
    // array[4]
    // array[3]
    // ... 
    // array[0]

    for(int i=0; i<5; i++) {
        // x+i=4
        // x=4-i;

        // i=0; array[4]
        // i=1; array[3]
        // i=2; array[2]
        // i=3; array[1]
        // i=4; array[0]
        printf("array[%d]=%d\n",4-i,array[4-i]);
    }

    printf("_________________________________\n");

    for(int i=4; i>=0; i--) {
        printf("array[%d]=%d\n",i,array[i]);
    }

    // 0, 1, 2, 3, 4

    int sum=0;
    for (int i=0; i<5; i++){
        sum = sum + i;
    }
    printf("Sum:%d", sum);
    printf("\n");
    // find the sum of array.

}

// array[0]=0 = 1
// array[1]=5 = 11
// array[2]=10 = 21
// array[3]=15 = 31;
// array[4]=20 = 41;

// (array[i]*2) + 1 = 1 
// 11
// 21 
// 31 
// 41


