#include <stdio.h>

int main() 
{
    int i;
    int i1;
    int x = scanf("%d %d",&i, &i1);
    int y = printf("%d\n",i);
    printf("x:%d, y:%d\n", x, y);
}

// [ 5 ]: memory
//  100 : address
//  i   : variable name

//  i => 5      : value at i 
//  &i => 100   : address of i