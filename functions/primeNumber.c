#include <stdio.h>

// function to check a number whether prime or not
int checkPrimeNumber(int number) {
    for( int i=2; i<number; i++ ) {
        if(number%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    // read a number from user
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    // find whether number is prime or not..
    int result = checkPrimeNumber(n);
    char *str;
    if(result) {
        str = "Prime Number";
    }
    else {
        str = "Not a Prime Number";
    }
    printf("%s\n", str);

// alternate approach using ternary operator:  <condition ? ifTrue : ifFalse>
    str = result ? "Prime Number" : "Not a Prime Number";
    printf("%s\n", str);

}