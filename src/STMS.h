/*
Programmer: Alexander Williams
Date:       30/03/19
File:       STMS.h
Purpose:    Definition of structures/records used in the
            Student Time Management System as well as the
            prototypes for the required functions.
*/

#ifndef STMS_H_INCLUDED
#define STMS_H_INCLUDED

typedef struct ///Date Record
{
  int day;
  int month;
  int year;
}Date;

typedef struct ///Assignment Record
{
    char name[30];
    Date dateGiven;
    Date dateDue;
    char type[4]; ///type of assignment (HW, CW or TEST)
    char subject[30];
    int time; ///estimated time for completion of/preparation for the assignment
}Assignment;

typedef struct ///Student Record
{
    char fName[15];
    char lName[15];
    int subjectNum;
    char subject[5][30];
    int activityNum;
    char activity[5][30];
    int assignmentNum;
    Assignment assignment[10];
    char schedule[7][5][30];
}Student;

void sortSubs(char [][30],int); ///function to sort the user's subjects by ascending difficulty
void readStudent(Student *); ///reads data into the members of a 'Student' structure
void displayStudent(Student); ///displays the data stored in the members of a 'Student' structure
void formatSchedule(char [][5][30]); ///formats the elements of a 3D array representing a schedule with arbitrary data
void formatDate(Date *); ///formats the members of a 'Date' structure with arbitrary data
void formatAssignment(Assignment *); ///formats the members of an 'Assignment' structure with arbitrary data
void formatStudent(Student *); ///formats the members of a 'Student' structure with arbitrary data
void readSchedule(Student *); ///reads data into the elements of a 3D array representing the schedule of the user
void displaySchedule(char [][5][30]); ///prints/displays the elements of a 3D array representing the schedule of the user
Date readDate(); ///reads data into the members of a 'Date' structure
Assignment readAssignment(Student ); ///reads data into the members of an 'Assignment' structure
void addWork(Student *); ///populates the 'assignment' member of a 'Student' structure with a user determined amount of elements
void deleteWork(Student *); ///formats the elements of the 'assignment' member of a 'Student' structure
void displayDate(Date); ///displays the data stored in the members of a 'Date' structure
void displayAssignment(Assignment); ///displays the data stored in the members of an 'Assignment' structure
void displayWork(Student ); ///displays the elements of the 'assignment' member of a 'Student' structure
void farewell(); ///displays a farewell message to the user when they exit the program through the menu
void menu(Student); ///displays menu options and calls their respective functions
void welcome(); ///displays a welcome message to the user when they start the program
void getPassword(char []); ///masks the user's input with '.' whenever they enter a password
void authenticate(int *); ///displays a login or sign-up screen and determines if the user is granted access
void updateLogin(); ///updates the username and password of the user that is stored on file
void writeStudentFile(Student); ///writes a 'Student' structure to a random access file
Student readStudentFile(); ///reads a 'Student' structure from a random access file and returns it
int infoFileEmpty(); ///checks if 'StudentInfo.txt' contains data

#endif // STMS_H_INCLUDED

