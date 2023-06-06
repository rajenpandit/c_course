#include <stdio.h>
int main()
{
    int array[5] = {1,2,3,4,5};
    // char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    printf("%p\n", array);
    printf("%p\n", &array[0]);
    printf("%d\n",array[0]);

    int *p = &array[0];

    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%p\n", p+1);
    printf("%d\n", *(p+1));
}