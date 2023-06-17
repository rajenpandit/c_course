#include <stdio.h>

typedef struct student_record
{
    char name[20];
    int roll_num;
    char class[5];
} student_record;

// typedef struct student_record student_record;

// size : 20+4+5 = 29 bytes

typedef struct book
{
    char id[5];
    char name[10];
    char author[20];
} book_details;
// size: 5+10+20 = 35

struct student
{
    struct student_record student_details;
    struct book books[5];
    char school[20];
};

/*
struct student s;
s.school;
s.books[0].name
s.books[0].author

sturct student *p = s;
p->school;
p->books[0].name

*/ 


void print_students(student_record students[3]) {
    for(int i=0; i<3; i++) {
        printf("Name:%s\n", students[i].name);
        printf("Roll Num:%d\n", students[i].roll_num);
        printf("Class:%s\n",students[i].class);
    }
}

void print_students_using_pointer(student_record* students) {
    for(int i=0; i<3; i++) {
        printf("Name:%s\n", students->name);
        printf("Roll Num:%d\n", students->roll_num);
        printf("Class:%s\n",students->class);
        students++;
    }
}

int main() {
    student_record students[3];
    book_details books[3];
    int x;

     printf("Enter details of students");
    for(int i=0; i<3; i++) {
        printf("Enter Name:");
        scanf("%s",students[i].name); 
        printf("Enter Roll Number:");
        scanf("%d",&students[i].roll_num);
        printf("Enter class:");
        scanf("%s", students[i].class);
    }
    printf("_____________________________\n");
    print_students(students);
    printf("_____________________________\n");
    print_students_using_pointer(students);

}


