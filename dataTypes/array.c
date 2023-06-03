#include <stdio.h>
#include <string.h>
// store 'Hello World' into an array.
//'\0' => 00000000
// [H|e|l|l|o| |W|o|r|l|d|\0]
//100 1 2 3 4 5 6 7 8 9 10 11
// p=103

// void print(char* p) {
//     while (*p != '\0')
//     {
//         printf("%c",*p);
//         p++; // p=p+1
//     }
// }

void print(char p[]) {
    int i = 0;
    while( p[i] != '\0') {
        printf("%c",p[i]);
        i++;
    }
}

// void copy(char* dst, const char* src) {

//     while(*src != '\0') {
//         *dst = *src;
//         dst++;
//         src++;
//     }
// }

void copy(char dst[], char src[]) {
    int i = 0;
    while( src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
}

int main() {
    // char arr[12];
    // arr[0] = 'H';
    // arr[1] = 'e';
    // arr[2] = 'l';
    // arr[3] = '\0';

    printf("Helloworld!!!\nsomething..\n X=%c Y=%d jsjdfjl ajs",66, 67); //%c, %d, %f, %s, %ul, %p
    printf("\n");
    char arr[] = "Hello World";
    char str[100];

    // strcpy(str, "Test string");
    copy(str, "Test string");
    printf("%s\n", str);
    printf("%s\n",arr);

    int i=0;
    print(arr);

    printf("\n");

    
}



