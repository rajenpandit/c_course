#include <stdlib.h>
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of ints you want store:");
    scanf("%d",&n);

    int *p = (int*) malloc(n*sizeof(int));

    for(int i=0; i<n; i++) {
        scanf("%d",p+i);
    }

    for(int i=0; i<n; i++) {
        printf("%p:%d ",p+i, *(p+i));
    }
    printf("\n");
}