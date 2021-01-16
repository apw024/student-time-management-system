/*
Programmer: Alexander Williams
Date:       30/03/19
File:       main.c
Purpose:    Main/Driver module for the Student Time Management System.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "STMS.h"

int main()
{
    Student student;
    int loggedIn;

    system("COLOR 1E"); ///console background colour - blue, console text colour - yellow

    welcome(); ///displays a welcome message to the user when they start the program
    authenticate(&loggedIn); ///displays a login or sign-up screen and determines if the user is granted access

    ///formats the student structure and writes it to file if 'StudentInfo.txt' is empty
    if(infoFileEmpty() == 0)
    {
        formatStudent(&student);
        writeStudentFile(student);
    }

    ///runs menu if the login is successful
    if(loggedIn == 1)
    {
        menu(student);
    }
    else
    {
        printf("User could not be authenticated");
    }

    return 0;
}
