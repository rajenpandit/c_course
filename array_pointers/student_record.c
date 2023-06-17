#include <stdio.h>

void print_student_details(char student_name[3][20],int roll_num[3], char class[3][5])
{
    for(int i=0; i<3; i++) {
        printf("Name:%s\n", student_name[i]);
        printf("Roll Num:%d\n", roll_num[i]);
        printf("Class:%s\n",class[i]);
    }
}
int main() {
    char book_id[3][10];
    char student_name[3][20];
    char author[3][10];
    int roll_num[3];
    char class[3][5];
    char book_name[3][10];

/**
 *  
    char student_name[3][20];
    int roll_num[3];
    char class[3][5];


    char book_id[3][10];
    char author[3][10];
    char book_name[3][10];
*/



    printf("Enter details of students");
    for(int i=0; i<3; i++) {
        printf("Enter Name:");
        scanf("%s",student_name[i]); 
        printf("Enter Roll Number:");
        scanf("%d",&roll_num[i]);
        printf("Enter class:");
        scanf("%s", class[i]);
    }

    print_student_details(student_name,roll_num,class);
}