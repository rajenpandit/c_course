// int
// char
// wchar - 16bit
// float
// double
// long
// unsigned

// int 16-bit-> 2byte, 32-bit -> 4 byte, 64-bit, 8 byte.

// long int -> 
// long long int
#include <stdio.h>


int x = 0173; // dec:123, hex: 0x7b, oct: 0173
char c = 65;  // 01000001
char c1 = 'A'; // ['A']  // 01000001
char* s = "B"; //this is a string litral ['B','\0'] // [01000010|00000000]

int y = 16684; // 0x12C  // 01000001.00101100  // [0000000|00000000|01000001|00101100]

//char* p; // [ | | | | | | | ]

int *ip = &y;
char* p = (char*)&y;

int main() {
    // printf("%d\n", sizeof(x));
    printf("value at ip %p\n", ip);
    printf("value at p %p\n", p);
    
    

    printf("sizeof ip: %lu\n", sizeof(ip));
    printf("sizeof *ip: %lu\n", sizeof(*ip));

    printf("sizeof p: %lu\n", sizeof(p));
    printf("sizeof *p: %lu\n", sizeof(*p));

    printf("value at address ip %d\n", *ip);
    printf("value at address p %d\n", *p);

}
