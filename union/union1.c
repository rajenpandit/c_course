#include <stdio.h>
union Job {
   char character;
   int workerNo;
} j;

struct ProfileInfo{
    char name[20];
    int age;
    char address[100];
    union id_proof {
        char aadhar_card[12];
        char PAN[10];
        char DrivingLicense[8];
    } id_proof;
};

int main() {
    j.workerNo = 321; // => 0x00.00.01.41
   j.character = 'B'; // => 0x42 => 0x00000142
    // j.character = 0x28; // => 0x28 => 0x00000128

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   

   printf("character = %c\n", j.character);
   printf("Number of workers = %d\n", j.workerNo);

   return 0;
}