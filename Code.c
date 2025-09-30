#include <stdio.h>
#include <stdlib.h>
#include"student.data.h"
// Structure to represent student information
struct Student
{
    char name[15];
    char father_name[20];
    char phone_no[30];
    char grade[5];
    char address[40];
    int attendence;
    int rollNumber;
    float marks;
};

// Function to add student information
int addStudent(struct Student students, int count)
{

    printf(" \n ENTER STUDENT INFORMATION AS GIVEN  \n");

    printf("1.Enter student name: ");
    scanf_s("%s",&students.name, 15);

    printf("2.Enter student phone Number:");
    scanf_s(" %s", &students.phone_no, 30);

    printf("3.Enter the student Grade:");
    scanf_s(" %s", &students.grade, 5);

    printf("4.Enter student total marks: ");
    scanf_s("%f", &students.marks);

    printf("5.Enter Student Father Name:");
    scanf_s("%s",&students.father_name,20);

    printf("6.Enter student roll number: ");
    scanf_s("%d",&students.rollNumber);

    printf("7.Enter Student Attendence:");
    scanf_s("%d", &students.attendence);

    printf("8.Enter Student Home Address:");
    scanf_s("%s", &students.address, 40);

  
    FILE* f;
    fopen_s(&f, "C:\\student data\\abc.txt", "a");
    if (f == NULL)
    {
        printf("Error Opening File.......\n");
    }
    fprintf(f,"%s %d %s %f %s %s %d %s", 
    students.name,students.rollNumber,students.phone_no,
    students.marks, students.grade, students.address, 
    students.attendence,students.father_name);
    fclose(f);

    return (count)++;
    }

// Function to display all student information
void displayStudents(struct Student students, int r)
{
    printf("\nStudent Information:\n");
    for (int i = 0; i < r; i++)
    {
        printf("Name: %s\n", students.name);
        printf("Father Name:%s", students.father_name);
        printf("Roll Number: %d\n", students.rollNumber);
        printf("Marks: %.2f\n", students.marks);
        printf("Phone Number:%s", students.phone_no);
        printf("Grade:%s", students.grade);
        printf("Address:%s", students.address);
        printf("Attendence:%d", students.attendence);
        printf("\n");
        printf("*******************************************\n");
    }
}

int main()
{
    int select,r;
    int count = 0;
    struct Student students[50]; 

    do
    {
       printf("   ***MENU OF STUDENT INFORMATION SYSTEM***\n");
        printf("\n");
        printf("Select 1 to add Students Information\n");
        printf("Select 2 to Display Students Information\n");
        printf("Select 3 to Exit\n");
        printf("Select any one[1,2,3]: ");
        scanf_s("%d",&select);


        switch (select)
        {
        case 1:
            if (count < 50) 
            {
                r=addStudent(students[50],count);
                printf("Information added successfully!\n");
            }
            else
            {
                printf("Maximum number of students reached!\n");
            }
            break;
        case 2:
            displayStudents(students[50],r);
            break;
        case 3:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again............\n");
        }

    } while (select != 3);
    data();

    return 0;
}
#pragma once
void data() 
{
    printf("PROGRAM RUNS SUCSESSFULLY");
}
