#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int main() 
{
    int value;
    printf("Enter the value:");
    scanf("%d",&value);

    // if(value%2 == 0) {
    //     printf("Even Value");
    // }
    // else{
    //     printf("Odd Value");
    // }

    switch (value%2)
    {
    case 0:
        printf("Even Value\n");
        break;
    
    default:
        printf("Odd Value\n");
        break;
    }

    // if(value == 1) {
    //     printf("Option 1");
    // }
    // else if(value == 2) {
    //     printf("Option 2");
    // }
    // else if(value == 3){
    //     printf("option 3");
    // }
    // else{
    //      printf("default option");
    // }
    int n1;
    int n2;
    switch (value)
    {
    case 1:
        printf("Please enter two numbers to add:");
        scanf("%d", &n1);
        scanf("%d", &n2);
        printf("Sum of two numbers is: %d\n", sum(n1, n2));
        break;
    case 2:
        printf("Please enter two numbers to sub:");
        scanf("%d", &n1);
        scanf("%d", &n2);
        printf("Sub of two numbers is: %d\n", sub(n1, n2));
        break;
    case 3:
        printf("Please enter two numbers to mul:");
        scanf("%d", &n1);
        scanf("%d", &n2);
        printf("Mul of two numbers is: %d\n", mul(n1, n2));
        break;
    default:
        printf("Invalid selection");
        break;
    }
    
}