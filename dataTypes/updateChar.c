
// Hello World
// update each character with its next value.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";  // hELLO wORLD

    int a = sizeof(str); //12
    int b = strlen(str); //11
    printf("sizeof str:%d, length of str:%d\n", a, b);
    printf("h:%d, H:%d\n", 'h', 'H');

    printf("A to Z: %d - %d\n", 'A', 'Z');
    printf("a to z: %d - %d\n", 'a', 'z');

    // if(str[i]>='A' && str[i] <= 'Z') {
    //     //caps
    //     str[i] = str[i] + 32;
    // } 
    // else {
    //     // small
    //     str[i] = str[i] - 32;
    // }

    // for(int i=0; i<strlen(str); i++)
    // {
    //     str[i] = str[i] + 1;
    // }

    // int indx = 0;
    // while( str[indx] != '\0' ) {
    //     str[indx] = str[indx] + 1;
    //     indx++;
    // }


    for ( int i=0; str[i] != '\0'; i++) {
        str[i] = str[i] + 1;
    }

    printf("%s\n",str); 
}