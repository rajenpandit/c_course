
/*
[1  2   3   4]
[5   6  7   8]
[9  10  11  12]
[13 14  15  16]
[17 18  19  20]
*/

#include <stdio.h>

void print(int arr[], int length) {
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void print_elements(int* p, int length) {
    for(int i=0; i<length; i++) {
        printf("%d ", *(p+i));
    }
}

int main() {
    int matrix[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    int arr[3][2][2] = 
        {
            {   
                {1,2},
                {3,4}
            },
            {   
                {5,6},
                {7,8}
            },
            {   
                {5,6},
                {7,8}
            }
        };

   

    printf("%d \n",matrix[2][3]);
    printf("%d \n", arr[0][0][1]);
    print(matrix[1], sizeof(matrix[0])/sizeof(int));
    print_elements(matrix[0], sizeof(matrix)/sizeof(int));
    
}