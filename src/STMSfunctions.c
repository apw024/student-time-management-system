/*
Programmer: Alexander Williams
Date:       30/03/19
File:       STMSfunctions.c
Purpose:    Definition of functions used in the main module for the
            Student Time Management System.
*/

#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "STMS.h"

///displays heading for the login section of module 'authenticate'
void loginHead()
{
    system("CLS");

    printf("  _                _           \n");
    printf(" | |    ___   __ _(_)_ __    _ \n");
    printf(" | |   / _ \\ / _` | | '_ \\  (_)\n");
    printf(" | |__| (_) | (_| | | | | |  _ \n");
    printf(" |_____\\___/ \\__, |_|_| |_| (_)\n");
    printf("             |___/             \n");
}

///displays heading for the sign up section of module 'authenticate'
void signupHead()
{
    system("CLS");

    printf("  ____  _               _   _           \n");
    printf(" / ___|(_) __ _ _ __   | | | |_ __    _ \n");
    printf(" \\___ \\| |/ _` | '_ \\  | | | | '_ \\  (_)\n");
    printf("  ___) | | (_| | | | | | |_| | |_) |  _ \n");
    printf(" |____/|_|\\__, |_| |_|  \\___/| .__/  (_)\n");
    printf("          |___/              |_|        \n");
}

///displays heading for the module 'displayWork'
void displayWorkHead()
{
    system("CLS");

printf("     _            _                                  _\n");
printf("    / \\   ___ ___(_) __ _ _ __  _ __ ___   ___ _ __ | |_ ___   _ \n");
printf("   / _ \\ / __/ __| |/ _` | '_ \\| '_ ` _ \\ / _ \\ '_ \\| __/ __| (_)\n");
printf("  / ___ \\\\__ \\__ \\ | (_| | | | | | | | | |  __/ | | | |_\\__ \\  _ \n");
printf(" /_/   \\_\\___/___/_|\\__, |_| |_|_| |_| |_|\\___|_| |_|\\__|___/ (_)\n");
printf("                    |___/                                        \n");


}

///displays heading for the module 'addWork'
void addWorkHead()
{
    system("CLS");

    printf("     _       _     _      _            _                                  _           \n");
    printf("    / \\   __| | __| |    / \\   ___ ___(_) __ _ _ __  _ __ ___   ___ _ __ | |_ ___   _ \n");
    printf("   / _ \\ / _` |/ _` |   / _ \\ / __/ __| |/ _` | '_ \\| '_ ` _ \\ / _ \\ '_ \\| __/ __| (_)\n");
    printf("  / ___ \\ (_| | (_| |  / ___ \\\\__ \\__ \\ | (_| | | | | | | | | |  __/ | | | |_\\__ \\  _ \n");
    printf(" /_/   \\_\\__,_|\\__,_| /_/   \\_\\___/___/_|\\__, |_| |_|_| |_| |_|\\___|_| |_|\\__|___/ (_)\n");
    printf("                                         |___/                                        \n");
}

///menu screen displayed when the user enters an invalid menu option
void errorMenuHead()
{
    system("CLS");

    printf("  __  __       _         __  __ \n");
    printf(" |  \\/  | __ _(_)_ __   |  \\/  | ___ _ __  _   _ \n");
    printf(" | |\\/| |/ _` | | '_ \\  | |\\/| |/ _ \\ '_ \\| | | |\n");
    printf(" | |  | | (_| | | | | | | |  | |  __/ | | | |_| |\n");
    printf(" |_|  |_|\\__,_|_|_| |_| |_|  |_|\\___|_| |_|\\__,_|\n");

    printf("\n[1] Edit Your Information\n");
    printf("[2] Display Your Information\n");
    printf("[3] Edit Your Schedule\n");
    printf("[4] Display Your Schedule\n");
    printf("[5] Add Assignments\n");
    printf("[6] Mark Assignments as Complete\n");
    printf("[7] Display Assignments\n");
    printf("[8] Update Login Info\n");
    printf("[9] Exit\n");
    printf("\nPlease enter an option from the menu:\n> ");
}

///default menu screen
void menuHead()
{
    system("CLS");

    printf("  __  __       _         __  __ \n");
    printf(" |  \\/  | __ _(_)_ __   |  \\/  | ___ _ __  _   _ \n");
    printf(" | |\\/| |/ _` | | '_ \\  | |\\/| |/ _ \\ '_ \\| | | |\n");
    printf(" | |  | | (_| | | | | | | |  | |  __/ | | | |_| |\n");
    printf(" |_|  |_|\\__,_|_|_| |_| |_|  |_|\\___|_| |_|\\__,_|\n");

    printf("\n[1] Edit Your Information\n");
    printf("[2] Display Your Information\n");
    printf("[3] Edit Your Schedule\n");
    printf("[4] Display Your Schedule\n");
    printf("[5] Add Assignments\n");
    printf("[6] Mark Assignments as Complete\n");
    printf("[7] Display Assignments\n");
    printf("[8] Update Login Info\n");
    printf("[9] Exit\n");
    printf("\nSelect Option: \n> ");
}

///displays heading for the module 'displaySchedule'
void displayScheduleHead()
{


        printf("  ____       _              _       _          \n");
        printf(" / ___|  ___| |__   ___  __| |_   _| | ___   _ \n");
        printf(" \\___ \\ / __| '_ \\ / _ \\/ _` | | | | |/ _ \\ (_) \n");
        printf("  ___) | (__| | | |  __/ (_| | |_| | |  __/  _ \n");
        printf(" |____/ \\___|_| |_|\\___|\\__,_|\\__,_|_|\\___| (_)\n\n");



}

///displays heading for the module 'readSchedule'
void readScheduleHead()
{
    system("CLS");

    printf("  _____    _ _ _     ____       _              _       _          \n");
    printf(" | ____|__| (_) |_  / ___|  ___| |__   ___  __| |_   _| | ___   _ \n");
    printf(" |  _| / _` | | __| \\___ \\ / __| '_ \\ / _ \\/ _` | | | | |/ _ \\ (_)\n");
    printf(" | |__| (_| | | |_   ___) | (__| | | |  __/ (_| | |_| | |  __/  _ \n");
    printf(" |_____\\__,_|_|\\__| |____/ \\___|_| |_|\\___|\\__,_|\\__,_|_|\\___| (_)\n");



}

///displays heading for the module 'readStudent'
void readStudentHead()
{
    system("CLS");

    printf("  ____  _             _            _     ___        __            \n");
    printf(" / ___|| |_ _   _  __| | ___ _ __ | |_  |_ _|_ __  / _| ___    _  \n");
    printf(" \\___ \\| __| | | |/ _` |/ _ \\ '_ \\| __|  | || '_ \\| |_ / _ \\  (_) \n");
    printf("  ___) | |_| |_| | (_| |  __/ | | | |_   | || | | |  _| (_) |  _  \n");
    printf(" |____/ \\__|\\__,_|\\__,_|\\___|_| |_|\\__| |___|_| |_|_|  \\___/  (_) \n");
}

///displays heading for the module 'displayStudent'
void displayStudentHead()
{
    system("CLS");

    printf(" __   __                 ___        __           \n");
    printf(" \\ \\ / /__  _   _ _ __  |_ _|_ __  / _| ___    _ \n");
    printf("  \\ V / _ \\| | | | '__|  | || '_ \\| |_ / _ \\  (_)\n");
    printf("   | | (_) | |_| | |     | || | | |  _| (_) |  _ \n");
    printf("   |_|\\___/ \\__,_|_|    |___|_| |_|_|  \\___/  (_)\n");
}

///awaits user input to continue program
void delay()
{
    printf("\nPress enter to continue...\n");
    getch();
}

///displays a welcome message to the user when they start the program
void welcome()
{

    printf("\n .d8888b. 88888888888 888b     d888  .d8888b.  \n");
    printf("d88P  Y88b    888     8888b   d8888 d88P  Y88b \n");
    printf("Y88b.         888     88888b.d88888 Y88b.      \n");
    printf(" \"Y888b.      888     888Y88888P888  \"Y888b.   \tWelcome to the Campion College 6B Student Time Management System!\n");
    printf("    \"Y88b.    888     888 Y888P 888     \"Y88b. \t\"The solution to all of your procrastination woes!\"\n");
    printf("      \"888    888     888  Y8P  888       \"888 \n");
    printf("Y88b  d88P    888     888   \"   888 Y88b  d88P \n");
    printf(" \"Y8888P\"     888     888       888  \"Y8888P\" \n");
    printf("\n\nMaximise window for the best experience");

    delay();
}

///function to sort the user's subjects by ascending difficulty
void sortSubs(char subject[][30],int subNum)
{
    int choice, i;
    char hold[5][30]; ///temporary array used to help sort subjects

    printf("\n");
    ///lists the user's subjects
    for(i = 0; i < subNum; i++)
    {
        printf("%i. ",i+1);
        puts(subject[i]);
    }

    ///populates the 'hold' array with the user's subjects in ascending order of difficulty
    for(i = 0; i < subNum; i++)
    {
        printf("\nNumber %i easiest subject from the above list\n> ",i+1);
        scanf("%i", &choice);

        switch(choice)
        {
        case 1:
            strcpy(hold[i], subject[0]);
            break;
        case 2:
            strcpy(hold[i], subject[1]);
            break;
        case 3:
            strcpy(hold[i], subject[2]);
            break;
        case 4:
            strcpy(hold[i], subject[3]);
            break;
        case 5:
            strcpy(hold[i], subject[4]);
            break;
        default:
            printf("Invalid Choice");
        }
    }

    ///populates the subject member of the student structure with the contents of hold.
    for(i = 0; i < subNum; i++)
    {
        strcpy(subject[i], hold[i]);
    }
}

///reads data into the members of a 'Student' structure
void readStudent(Student *st)
{
    int choice, i;

    readStudentHead();

    strcpy(st->subject[0], "Communication Studies"); ///assigns the compulsory subject to the subject member of the student structure

    ///prompts for and reads the student's first and last name as well as their number subjects into the respective student structure members
    printf("\nFirst Name> ");
    fflush(stdin);
    gets(st->fName);
    printf("\nLast Name> ");
    gets(st->lName);
    printf("\nNumber of Subjects (exclusive of Communication Studies)\n[3/4]> ");
    scanf("%i", &(st->subjectNum));

    ///ensures that only 3 or 4 is entered for the subject number
    while((st->subjectNum != 3) && (st->subjectNum != 4))
    {
        system("CLS");
        printf("Please enter 3 or 4\n> ");
        fflush(stdin);
        scanf("%i", &st->subjectNum);

    }

    (st->subjectNum)++; ///increments the subject number member so as to include the compulsory subject in the overall number of subjects

    ///list of subjects offered for Campion College Lower Sixth (6B) Students
    printf("\n1. Physics                  ");
    printf("5. Pure Mathematics         ");
    printf("9. French                   ");
    printf("13. Principles of Accounts\n");
    printf("2. Chemistry                ");
    printf("6. Digital Media            ");
    printf("10. Spanish                 ");
    printf("14. Sociology\n");
    printf("3. Biology                  ");
    printf("7. Management of Business   ");
    printf("11. Economics               ");
    printf("15. Geography\n");
    printf("4. Computer Science         ");
    printf("8. Literatures in English   ");
    printf("12. Law                     ");
    printf("16. History\n");

    ///prompts for and assigns the user's subjects based on the number of subjects they do (4 or 5)
    printf("\nSelect %i subjects:", (st->subjectNum)-1);
    for(i = 1; i < st->subjectNum; i++)
    {
        printf("\n> " );
        scanf("%i", &choice);
        switch(choice)
        {
        case 1:
            strcpy(st->subject[i], "Physics");
            break;
        case 2:
            strcpy(st->subject[i], "Chemistry");
            break;
        case 3:
            strcpy(st->subject[i], "Biology");
            break;
        case 4:
            strcpy(st->subject[i], "Computer Science");
            break;
        case 5:
            strcpy(st->subject[i], "Pure Mathematics");
            break;
        case 6:
            strcpy(st->subject[i], "Digital Media");
            break;
        case 7:
            strcpy(st->subject[i], "Management of Business");
            break;
        case 8:
            strcpy(st->subject[i], "Literatures in English");
            break;
        case 9:
            strcpy(st->subject[i], "French");
            break;
        case 10:
            strcpy(st->subject[i], "Spanish");
            break;
        case 11:
            strcpy(st->subject[i], "Economics");
            break;
        case 12:
            strcpy(st->subject[i], "Law");
            break;
        case 13:
            strcpy(st->subject[i], "Principles of Accounts");
            break;
        case 14:
            strcpy(st->subject[i], "Sociology");
            break;
        case 15:
            strcpy(st->subject[i], "Geography");
            break;
        case 16:
            strcpy(st->subject[i], "History");
            break;
        }
    }

    readStudentHead();

    sortSubs(st->subject, st->subjectNum);

    readStudentHead();

    ///prompts for and reads the user's number of activities
    printf("\nNumber of Co-Curricular Activities\n[1-5]> ");
    scanf("%i", &st->activityNum);

    ///ensures that the number entered is between 4 and 5
    while((st->activityNum>5) || (st->activityNum<1))
    {
        printf("Please enter a number between 1 and 5 \n> ");
        fflush(stdin);
        scanf("%i", &st->activityNum);
    }

    readStudentHead();

    ///list of Clubs and Sports offered by Campion College
    printf("\n1.  Aeronautics Club           \t");
    printf("21. I.S.C.F.                   \t");
    printf("41. Sixth Form Association\n");
    printf("2.  Angels of Love             \t");
    printf("22. Interact Club              \t");
    printf("42. Software Engineering Club\n");
    printf("3.  Animal Club                \t");
    printf("23. Key Club                   \t");
    printf("43. Student Council\n");
    printf("4.  Animation                  \t");
    printf("24. Lego Yuh Mind Robotics Club\t");
    printf("44. Students for Democracy\n");
    printf("5.  Art Club                   \t");
    printf("25. Leo Club                   \t");
    printf("45. TED - ED\n");
    printf("6.  Campion Coders             \t");
    printf("26. Mathematics Club           \t");
    printf("46. The Students' Voice\n");
    printf("7.  Campion Theatre Ensemble   \t");
    printf("27. Media and Production Club  \t");
    printf("47. Tourism Action Club\n");
    printf("8.  Catholic Club              \t");
    printf("28. Medics Club                \t");
    printf("48. United Nations Club\n");
    printf("9.  Chapel Choir               \t");
    printf("29. Ministry Outreach Program  \t");
    printf("49. Young Entrepreneurial Society\n");
    printf("10. Christian Life Community   \t");
    printf("30. Modern Language Club       \t");
    printf("50. Basketball\n");
    printf("11. Computer and Media Club    \t");
    printf("31. Music Club                 \t");
    printf("51. Chess\n");
    printf("12. Dance Society              \t");
    printf("32. Chords                     \t");
    printf("52. Fitness & Weightlifting\n");
    printf("13. Debating Society           \t");
    printf("33. Drum Ensemble              \t");
    printf("53. Football\n");
    printf("14. Disaster Preparedness      \t");
    printf("34. Steel Band                 \t");
    printf("54. Hockey\n");
    printf("15. D.I.Y.                    \t");
    printf("35. Peer Counselling          \t");
    printf("55. Lawn Tennis\n");
    printf("16. Engineering Club          \t");
    printf("36. Rangers                   \t");
    printf("56. Swimming\n");
    printf("17. Gavel Club                \t");
    printf("37. Readers Association       \t");
    printf("57. Table Tennis\n");
    printf("18. Gourmet Club              \t");
    printf("38. Red Cross                 \t");
    printf("58. Track and Field\n");
    printf("19. Girl Code                 \t");
    printf("39. Science Club              \t");
    printf("59. Volleyball\n");
    printf("20. Green Generation          \t");
    printf("40. Sign Language Club        \t");
    printf("60. Water Polo\n");

    ///prompts for and assigns the user's activities based on the number of activities they do
    printf("\nSelect %i activities(y): ", st->activityNum);
    for(i = 0; i < st->activityNum; i++)
    {
        printf("\n> ");
        scanf("%i", &choice);

        ///ensures the user's choice is a number from 1-60
        while(((choice < 1)||(choice > 60)))
        {
            printf("\nPlease enter a number between 1 and 60\n> ");
            fflush(stdin);
            scanf("%i", &choice);
        }
        switch(choice)
        {
            case 1:
				strcpy(st->activity[i], "Aeronautics Club");
				break;
			case 2:
				strcpy(st->activity[i], "Angels of Love");
				break;
			case 3:
				strcpy(st->activity[i], "Animal Club");
				break;
			case 4:
				strcpy(st->activity[i], "Animation");
				break;
			case 5:
				strcpy(st->activity[i], "Art Club");
				break;
			case 6:
				strcpy(st->activity[i], "Campion Coders");
				break;
			case 7:
				strcpy(st->activity[i], "Campion Theatre Ensemble");
				break;
			case 8:
				strcpy(st->activity[i], "Catholic Club");
				break;
			case 9:
				strcpy(st->activity[i], "Chapel Choir");
				break;
			case 10:
				strcpy(st->activity[i], "Christian Life Community");
				break;
			case 11:
				strcpy(st->activity[i], "Computer and Media Club");
				break;
			case 12:
				strcpy(st->activity[i], "Dance Society");
				break;
			case 13:
				strcpy(st->activity[i], "Debating Society");
				break;
			case 14:
				strcpy(st->activity[i], "Disaster Preparedness");
				break;
			case 15:
				strcpy(st->activity[i], "D.I.Y.");
				break;
			case 16:
				strcpy(st->activity[i], "Engineering Club");
				break;
			case 17:
				strcpy(st->activity[i], "Gavel Club");
				break;
			case 18:
				strcpy(st->activity[i], "Gourmet Club");
				break;
			case 19:
				strcpy(st->activity[i], "Girl Code");
				break;
			case 20:
				strcpy(st->activity[i], "Green Generation");
				break;
			case 21:
				strcpy(st->activity[i], "I.S.C.F.");
				break;
			case 22:
				strcpy(st->activity[i], "Interact Club");
				break;
			case 23:
				strcpy(st->activity[i], "Key Club");
				break;
			case 24:
				strcpy(st->activity[i], "Lego Yuh Mind Robotics Club");
				break;
			case 25:
				strcpy(st->activity[i], "Leo Club");
				break;
			case 26:
				strcpy(st->activity[i], "Mathematics Club");
				break;
			case 27:
				strcpy(st->activity[i], "Media and Production Club");
				break;
			case 28:
				strcpy(st->activity[i], "Medics Club");
				break;
			case 29:
				strcpy(st->activity[i], "Ministry Outreach Program");
				break;
			case 30:
				strcpy(st->activity[i], "Modern Language Club");
				break;
			case 31:
				strcpy(st->activity[i], "Music Club");
				break;
			case 32:
				strcpy(st->activity[i], "Chords");
				break;
			case 33:
				strcpy(st->activity[i], "Drum Ensemble");
				break;
			case 34:
				strcpy(st->activity[i], "Steel Band");
				break;
			case 35:
				strcpy(st->activity[i], "Peer Counselling");
				break;
			case 36:
				strcpy(st->activity[i], "Rangers");
				break;
			case 37:
				strcpy(st->activity[i], "Readers Association");
				break;
			case 38:
				strcpy(st->activity[i], "Red Cross");
				break;
			case 39:
				strcpy(st->activity[i], "Science Club");
				break;
			case 40:
				strcpy(st->activity[i], "Sign Language Club");
				break;
			case 41:
				strcpy(st->activity[i], "Sixth Form Association");
				break;
			case 42:
				strcpy(st->activity[i], "Software Engineering Club");
				break;
			case 43:
				strcpy(st->activity[i], "Student Council");
				break;
			case 44:
				strcpy(st->activity[i], "Students for Democracy");
				break;
			case 45:
				strcpy(st->activity[i], "TED - ED");
				break;
			case 46:
				strcpy(st->activity[i], "The Students' Voice");
				break;
			case 47:
				strcpy(st->activity[i], "Tourism Action Club");
				break;
			case 48:
				strcpy(st->activity[i], "United Nations Club");
				break;
			case 49:
				strcpy(st->activity[i], "Young Entrepreneurial Society");
				break;
			case 50:
				strcpy(st->activity[i], "Basketball");
				break;
			case 51:
				strcpy(st->activity[i], "Chess");
				break;
			case 52:
				strcpy(st->activity[i], "Fitness & Weightlifting");
				break;
			case 53:
				strcpy(st->activity[i], "Football");
				break;
			case 54:
				strcpy(st->activity[i], "Hockey");
				break;
			case 55:
				strcpy(st->activity[i], "Lawn Tennis");
				break;
			case 56:
				strcpy(st->activity[i], "Swimming");
				break;
			case 57:
				strcpy(st->activity[i], "Table Tennis");
				break;
			case 58:
				strcpy(st->activity[i], "Track and Field");
				break;
			case 59:
				strcpy(st->activity[i], "Volleyball");
				break;
			case 60:
				strcpy(st->activity[i], "Water Polo");
				break;
			default:
				printf("Invalid option");
        }
    }
}

///displays the data stored in the members of a 'Student' structure
void displayStudent(Student st)
{
    int i;

    displayStudentHead();

    printf("\nYour Name\n> %s %s\n", st.fName, st.lName); ///displays user's name

    ///displays user's subjects (in ascending difficulty)
    printf("\nYour Subjects: \n");
    for(i = 0;i < st.subjectNum; i++)
    {
        printf(">");
        puts(st.subject[i]);
    }

    ///displays the activities done by the user
    printf("\nYour Activities: \n");
    for(i = 0;i < st.activityNum; i++)
    {
        printf(">");
        puts(st.activity[i]);
    }
}

///reads data into the elements of a 3D array representing the schedule of the user
void formatSchedule(char schedule[][5][30])
{
    int r,c;

    ///populates the array column by column with arbitrary values
    for(c = 0; c < 5; c++)
    {
        for(r = 0; r < 6; r++)
        {
            strcpy(schedule[r][c], "NO CLASS"); ///assigns the first 6 elements in every column with the arbitrary value 'NO CLASS'
        }

        strcpy(schedule[6][c], "NO ACTIVITY"); ///assigns the last element in every column with the arbitrary value 'NO ACTIVITY'
    }
}

///formats the members of a 'Date' structure with arbitrary data
void formatDate(Date *dt)
{
    dt->day = 0;
    dt->month = 0;
    dt->year = 2019;
}

///formats the members of an 'Assignment' structure with arbitrary data
void formatAssignment(Assignment *as)
{
    strcpy(as->name, "--");
    formatDate(&(as->dateGiven)); ///formats the date given member of the assignment structure
    formatDate(&(as->dateDue)); ///formats the date due member of the assignment structure
    strcpy(as->type, "--");
    strcpy(as->subject, "--");
    as->time = 0;
}

///formats the members of a 'Student' structure with arbitrary data
void formatStudent(Student *st)
{
    int i;

    strcpy(st->fName,"--");
    strcpy(st->lName,"--");
    st->subjectNum = 0;
    for(i = 0; i < 5; i++)
    {
        strcpy(st->subject[i],"--");
    }
    st->activityNum = 0;
    for(i = 0; i < 5; i++)
    {
        strcpy(st->activity[i],"--");
    }
    st->assignmentNum = 0;

    ///formats the elements of the assignment member
    for(i = 0; i < 10; i++)
    {
        formatAssignment(&(st->assignment[i]));
    }

    ///formats the users schedule
    formatSchedule(st->schedule);
}

///reads data into the elements of a 3D array representing the schedule of the user
void readSchedule(Student *st)
{
    int i, r, c, choice;
    char day[5][10] = {{"Monday"}, {"Tuesday"}, {"Wednesday"}, {"Thursday"}, {"Friday"}};

    formatSchedule(st->schedule); ///ensures that the schedule is formatted before it is read

    readScheduleHead();

    ///populates schedule array column by column
    for(c = 0; c < 5; c++)
    {
        printf("\nEnter Classes for %s:\n\n", day[c]); /// prints the day of the week the user is entering data into

        ///prints the user's subjects as options
        for(i = 0; i < st->subjectNum; i++)
        {
            printf("%i. ", i+1);
            puts(st->subject[i]);
        }
        printf("%i. No Class\n", i+1);

        for(r = 0; r < 6; r++)
        {
           printf("\nPeriod %i Class\n> ", r+1); ///reads the user's choice for class
           scanf("%i", &choice);

           /// assigns the subject to the current element position based on the user's option
           if(st->subjectNum == 4)
           {
               switch(choice)
               {
                case 1:
                    strcpy(st->schedule[r][c], st->subject[0]);
                    break;
                case 2:
                    strcpy(st->schedule[r][c], st->subject[1]);
                    break;
                case 3:
                    strcpy(st->schedule[r][c], st->subject[2]);
                    break;
                case 4:
                    strcpy(st->schedule[r][c], st->subject[3]);
                    break;
                case 5:
                    break;
                default:
                    printf("Invalid Choice");

               }
           }
           else
           {
               switch(choice)
               {
                case 1:
                    strcpy(st->schedule[r][c], st->subject[0]);
                    break;
                case 2:
                    strcpy(st->schedule[r][c], st->subject[1]);
                    break;
                case 3:
                    strcpy(st->schedule[r][c], st->subject[2]);
                    break;
                case 4:
                    strcpy(st->schedule[r][c], st->subject[3]);
                    break;
                case 5:
                    strcpy(st->schedule[r][c], st->subject[4]);
                    break;
                case 6:
                    break;
                default:
                    printf("Invalid Choice");
               }
           }
        }

        readScheduleHead();


        if(st->activityNum != 0) ///verifies that the user does activities before prompting for the activity
        {
            printf("\nActivity for %s: \n\n", day[c]); ///prints the day of the week the user is entering data into

            ///prints the user's activities as options
            for(i = 0; i < st->activityNum; i++)
            {
                printf("%i. ", i+1);
                puts(st->activity[i]);
            }
            printf("%i. No Activity\n", i+1);

            ///prompts and reads the users choice of activity
            printf("\nActivity\n> ");
            scanf("%i", &choice);

            ///assigns the activity for the current day based on the user's choice
            switch(choice)
            {
                case 1:
                    strcpy(st->schedule[6][c], st->activity[0]);
                    break;
                case 2:
                    if(strcmp(st->activity[1], "--") == 0)
                    {
                        break;
                    }
                    else
                    {
                        strcpy(st->schedule[6][c], st->activity[1]);
                        break;
                    }
                case 3:
                    if(strcmp(st->activity[2], "--") == 0)
                    {
                        break;
                    }
                    else
                    {
                        strcpy(st->schedule[6][c], st->activity[2]);
                        break;
                    }
                case 4:
                    if(strcmp(st->activity[3], "--") == 0)
                    {
                        break;
                    }
                    else
                    {
                        strcpy(st->schedule[6][c], st->activity[3]);
                        break;
                    }
                case 5:
                    if(strcmp(st->activity[4], "--") == 0)
                    {
                        break;
                    }
                    else
                    {
                        strcpy(st->schedule[6][c], st->activity[4]);
                        break;
                    }
                case 6:
                    break;
                default:
                    printf("Invalid Option");
            }
        }
        readScheduleHead();
    }
}

///prints/displays the elements of a 3D array representing the schedule of the user
void displaySchedule(char schedule[][5][30])
{
    int r, c, i;
    char day[6][10] = {{""},{"Monday"}, {"Tuesday"}, {"Wednesday"}, {"Thursday"}, {"Friday"}};
    char period[7][12] = {{"8:00-9:10"},{"9:10-10:20"},{"10:20-11:30"},{"11:30-12:40"},{"12:40-1:50"},{"1:50-3:00"},{"Activity"}};

    displayScheduleHead();

    ///displays the array row by row so as to get even spacing between columns
    for(i = 0; i < 6; i++)
    {
        printf("%-30s", day[i]);
    }
    printf("\n");
    for(r = 0; r < 7; r++)
    {
        printf("%-30s", period[r]);

        for(c = 0; c < 5; c++)
        {
          printf("%-30s", schedule[r][c]);
        }
        printf("\n");
    }
}

///reads data into the members of a 'Date' structure
Date readDate()
{
    Date dt;

    ///prompts and reads day component for the date
    printf("\nDay> ");
    scanf("%i", &dt.day);

    ///ensures the day entered is from 1-31
    while(dt.day > 31 || dt.day < 1)
    {
        printf("Please enter a number between 1 and 31\n> ");
        fflush(stdin);
        scanf("%i", &dt.day);
    }

    ///prompts and reads month component for the datei
    printf("Month> ");
    scanf("%i", &dt.month);
    while((dt.month > 12 || dt.month < 1))
    {
        printf("Please enter a number between 1 and 12\n> ");
        fflush(stdin);
        scanf("%i", &dt.month);
    }

    dt.year = 2019; ///assumes that all date values use the year 2019

    return dt; ///returns the created date structure to the calling function
}

///reads data into the members of an 'Assignment' structure
 Assignment readAssignment(Student st)
{
    Assignment as;
    char choice;
    int i;

    ///prompts for and reads the assignment's name, date given and due date
    fflush(stdin);
    printf("\nAssignment Name> ");
    gets(as.name);
    printf("\nDate Given: ");
    as.dateGiven = readDate();
    printf("\nDate Due: ");
    as.dateDue = readDate();

    addWorkHead();

    ///prompts for and reads the assignment's type
    printf("\n1. HW");
    printf("\n2. CW");
    printf("\n3. TEST\n");
    printf("\nAssignment Type> ");
    fflush(stdin);
    choice = getch();
    ///ensures that a number from 1-3 is entered
    while(
          choice != '1' &&
          choice != '2' &&
          choice != '3'
          )
    {
        printf("Please enter a number from 1-3> ");
        choice = getch();
    }
    switch(choice)
    {
        case '1':
            strcpy(as.type, "HW");
            break;
        case '2':
            strcpy(as.type, "CW");
            break;
        case '3':
            strcpy(as.type, "TEST");
            break;
    }

    ///displays the user's subjects
    printf("\n\n");
    for(i = 0; i < st.subjectNum; i++)
    {
        printf("%i. ", i+1);
        puts(st.subject[i]);
    }

    ///prompts for and reads the assignment's subject and therefore assigns an estimated time based on the subject selected
    printf("\nAssignment Subject> ");
    fflush(stdin);
    choice = getch();
    if(st.subjectNum == 5)
    {
        ///ensures that the number entered is from 1-5
        while(
            choice != '1' &&
            choice != '2' &&
            choice != '3' &&
            choice != '4' &&
            choice != '5'
            )
        {
            printf("Please enter a number from 1-5> ");
            choice = getch();
        }
        switch(choice)
        {
            case '1':
                strcpy(as.subject, st.subject[0]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 30;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 45;
                    }
                    else
                    {
                        as.time = 60;
                    }
                }
                break;
            case '2':
                strcpy(as.subject, st.subject[1]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 45;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 60;
                    }
                    else
                    {
                        as.time = 75;
                    }
                }
                break;
            case '3':
                strcpy(as.subject, st.subject[2]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 60;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 75;
                    }
                    else
                    {
                        as.time = 90;
                    }
                }
                break;
            case '4':
                strcpy(as.subject, st.subject[3]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 75;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 90;
                    }
                    else
                    {
                        as.time = 105;
                    }
                }
                break;
            case '5':
                strcpy(as.subject, st.subject[4]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 90;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 105;
                    }
                    else
                    {
                        as.time = 120;
                    }
                }
                break;
            default:
                printf("Invalid Choice");
        }
    }
    else
    {
        ///ensures that the number entered is from 1-4
        while(
            choice != '1' &&
            choice != '2' &&
            choice != '3' &&
            choice != '4'
            )
        {
            printf("Please enter a number from 1-4> ");
            choice = getch();
        }
       switch(choice)
       {
            case '1':
                strcpy(as.subject, st.subject[0]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 30;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 45;
                    }
                    else
                    {
                        as.time = 60;
                    }
                }
                break;
            case '2':
                strcpy(as.subject, st.subject[1]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 45;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 60;
                    }
                    else
                    {
                        as.time = 75;
                    }
                }
                break;
            case '3':
                strcpy(as.subject, st.subject[2]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 60;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 75;
                    }
                    else
                    {
                        as.time = 90;
                    }
                }
                break;
            case '4':
                strcpy(as.subject, st.subject[3]);
                if((strcmp(as.type, "HW"))==0)
                {
                    as.time = 75;
                }
                else
                {
                    if((strcmp(as.type, "CW"))==0)
                    {
                        as.time = 90;
                    }
                    else
                    {
                        as.time = 105;
                    }
                }
                break;
            default:
                printf("\nInvalid Choice: ");
        }
    }

    ///reads a new value for time if the user wants to
    printf("\n\nSuggested time for preparation/completion is %i minutes. Would you like to override this time?", as.time);
    printf("\n[Y/N]> ");
    fflush(stdin);
    choice = getch();
    ///ensures that either a y or n is entered
    while(
          (choice != 'Y' && choice != 'y') &&
          (choice != 'N' && choice != 'n')
          )
    {
        printf("Please enter Y or N> ");
        choice = getch();
    }
    switch(choice)
    {
    case 'Y': case 'y':
            printf("New Time in minutes> ");
            scanf("%i", &as.time);
            break;
        case 'N': case 'n':
            break;
        default:
            printf("Invalid Choice");
    }

    return as;
}

///populates the 'assignment' member of a 'Student' structure with a user determined amount of elements
void addWork(Student *st)
{
    int i = st->assignmentNum, num;

    addWorkHead();

    printf("\nNumber of assignments to add> ");
    scanf("%i", &num);

    ///ensures that the user doesn't enter more assignments than which can be stored
    while((num >= (10-st->assignmentNum)))
    {
        printf("\nPlease enter a number less than or equal to %i", 10-st->assignmentNum);
        printf("\n> ");
        fflush(stdin);
        scanf("%i", &num);
    }

    num = i + num; ///obtains terminal index by adding the number of assignments to the number of assignments being read

    ///prompts for and reads assignments into elements of the assignment member
    for(; i < num ; i++)
    {
        addWorkHead();
        fflush(stdin);
        st->assignment[i] = readAssignment(*st);
        st->assignmentNum++;
    }
}

///formats the elements of the 'assignment' member of a 'Student' structure
void deleteWork(Student *st)
{
    int i;

    for(i = 0; i < st->assignmentNum; i++)
    {
        formatAssignment(&(st->assignment[i]));
    }

    st->assignmentNum = 0; ///resets the number of assignments to 0

    printf("Assignments Have Been Cleared");
}

///displays the data stored in the members of a 'Date' structure
void displayDate(Date dt)
{
    printf("%i/%i/%i", dt.day, dt.month, dt.year);
}

///displays the data stored in the members of an 'Assignment' structure
void displayAssignment(Assignment as)
{
    printf("\nAssignment Name> %s", as.name);
    printf("\nDate Given: ");
    displayDate(as.dateGiven);
    printf("\nDate Due: ");
    displayDate(as.dateDue);
    printf("\nAssignment Type: %s", as.type);
    printf("\nAssignment Subject: %s", as.subject);
    printf("\nEstimated Time for Completion/Preparation: %i mins", as.time);
    printf("\n---------------------------------------------------------\n");
}

///formats the elements of the 'assignment' member of a 'Student' structure
void displayWork(Student st)
{
    int i;

    displayWorkHead();

    for(i = 0; i<st.assignmentNum; i++)
    {
        printf("\nAssignment #%i", i+1);
        displayAssignment(st.assignment[i]);
    }
}

///displays a farewell message to the user when they exit the program through the menu
void farewell()
{

    printf(" .d8888b. 88888888888 888b     d888  .d8888b.  \n");
    printf("d88P  Y88b    888     8888b   d8888 d88P  Y88b \n");
    printf("Y88b.         888     88888b.d88888 Y88b.      \n");
    printf(" \"Y888b.      888     888Y88888P888  \"Y888b.   \n");
    printf("    \"Y88b.    888     888 Y888P 888     \"Y88b. \n");
    printf("      \"888    888     888  Y8P  888       \"888 \n");
    printf("Y88b  d88P    888     888   \"   888 Y88b  d88P \n");
    printf(" \"Y8888P\"     888     888       888  \"Y8888P\" \n");
    printf("Exiting System...");
}

///displays menu options and calls their respective functions
void menu(Student st)
{
    char choice;

    do ///repeat until exit option is triggered
    {

        menuHead();

        fflush(stdin);
        choice = getch();

        ///ensures the choice is from numbers 1-9
        while(choice !='1' &&
              choice !='2' &&
              choice !='3' &&
              choice !='4' &&
              choice !='5' &&
              choice !='6' &&
              choice !='7' &&
              choice !='8' &&
              choice !='9'
              )
        {
           errorMenuHead();
           choice = getch();
        }
        switch(choice)
        {
            case '1':
                system("CLS");
                readStudent(&st); ///reads data into the members of a student structure
                writeStudentFile(st); ///writes the recently modified student structure to a random access file
                break;
            case '2':
                system("CLS");

                st = readStudentFile(); ///reads a 'Student' structure from a random access file and assigns it to the student structure

                ///ensures that the student structure isn't empty/formatted
                if(strcmp(st.fName, "--") != 0)
                {
                    displayStudent(st);
                    delay();
                }
                else
                {
                    printf("Please Enter Your Information First!");
                    delay();
                }
                break;
            case '3':
                system("CLS");
                st = readStudentFile();

                ///ensures that the student structure isn't empty/formatted
                if(st.subjectNum != 0)
                {
                    readSchedule(&st);
                    writeStudentFile(st);
                }
                else
                {
                    printf("Please Enter Your Information First!");
                    delay();
                }
                break;
            case '4':
                system("CLS");
                st = readStudentFile();

                ///ensures that the schedule isn't empty/formatted
                if(strcmp(st.schedule[0][0], "NO CLASS") != 0)
                {
                    displaySchedule(st.schedule);
                    delay();
                }
                else
                {
                    printf("Please Enter Your Schedule First!");
                    delay();
                }
                break;
            case '5':
                system("CLS");
                st = readStudentFile();

                ///ensures that the student structure isn't formatted and that the number of assignments does not exceed the capacity
                if(st.subjectNum != 0 && st.assignmentNum <10)
                {
                    addWork(&st);
                    writeStudentFile(st);
                }
                else
                {
                    if(st.assignmentNum == 10)
                    {
                        printf("Unable to store anymore assignments!");
                        delay();
                    }
                    else
                    {
                    printf("Please Enter Your Information First!");
                    delay();
                    }
                }
                break;
            case '6':
                system("CLS");
                st = readStudentFile();

                ///ensures that the student structure isn't empty/formatted
                if(st.assignmentNum != 0 && st.subjectNum != 0)
                {
                    deleteWork(&st);
                    writeStudentFile(st);
                }
                else
                {
                    printf("\nAssignments are clear! No pending assignments due...");
                    delay();
                }
                break;
            case '7':
                system("CLS");
                st = readStudentFile();

                ///ensures the assignments are not empty/formatted
                if(strcmp(st.assignment[0].name, "--") != 0)
                {
                    displayWork(st);
                    delay();
                }
                else
                {
                    printf("No pending assignments due");
                    delay();
                }
                break;
            case '8':
                system("CLS");
                updateLogin(); ///updates the username and password of the user that is stored on file
                break;
            case '9':
                system("CLS");
                farewell(); ///displays a farewell message to the user when they exit the program through the menu
                break;
            default:
                printf("Please select an option from the menu");
        }
    }
    while(choice != '9');
}

///masks the user's input with '.' whenever they enter a password
void getPassword(char password[])
{
    char ch;
    int i = 0;

    while(1)
    {
        ch = getch();
        if (ch == 13)
        {
            password[i] = '\0';
            break;
        }
        else if (ch == 8)
            {
                if (i > 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
        else if ((ch == 37)||(ch == 38)||(ch == 39)||(ch == 40))
            {
                printf("\b \b");
            }
            else
            {
                password[i] = ch;
                i++;
                printf(".");
            }
        }
}

///displays a login or sign-up screen and determines if the user is granted access
void authenticate(int *loggedIn)
{
    char nameOnFile[25], passwordOnFile[25], uname[25], pwd[25];
    FILE *fpRead, *fpWrite;
    long size;

    system("CLS");

    if((fpRead = fopen("Login.txt", "a+")) != NULL) ///opens 'Login.txt' for reading as well as appending
    {
        fseek(fpRead, 0, SEEK_END);
        size = ftell(fpRead);

        ///checks if to sign up or login
        if(size != 0)/// ensures that something is on file
        {
            fseek(fpRead, 0, SEEK_SET);
            fscanf(fpRead, "%s %s", nameOnFile, passwordOnFile); ///reads and stores the username and password that is on file

            ///login screen

            loginHead();
            printf("\nUsername> ");
            scanf("%s", uname);
            printf("\nPassword> ");
            getPassword(pwd);

            ///ensures that access is not granted unless the name and password entered are identical to the name and password on file
            while(strcmp(uname, nameOnFile) != 0 || strcmp(pwd, passwordOnFile) != 0)
            {
                loginHead();
                printf("Incorrect Password or Username...Try Again\n");
                printf("\nUsername> ");
                scanf("%s", uname);
                printf("\nPassword> ");
                getPassword(pwd);
            }

            *loggedIn = 1; ///access granted
        }
        else
        {
            ///sign up screen
            do
            {

                signupHead();
                printf("\nUsername> ");
                scanf("%s", uname);
                printf("\nPassword> ");
                getPassword(pwd);
            }
            while(strcmp(uname, "") == 0 || strcmp(pwd, "") == 0);

            ///write the new user to file
            if((fpWrite = fopen("Login.txt", "w")) != NULL)
            {
                fprintf(fpWrite, "%s %s", uname, pwd);
                *loggedIn = 1;///user logged in
                fclose(fpWrite);
            }else
            {
                *loggedIn = 0;///user not logged in
            }
        }
        fclose(fpRead);
    }
    else
    {
        *loggedIn = 0;///user not logged in
    }
}

///updates the username and password of the user that is stored on file
void updateLogin()
{
    char uname[25], pwd[25];
    FILE *fp;

    system("cls");

    if((fp = fopen("Login.txt", "w")) != NULL)
    {
        do
        {

            printf("  _   _           _       _         _                _           \n");
            printf(" | | | |_ __   __| | __ _| |_ ___  | |    ___   __ _(_)_ __    _ \n");
            printf(" | | | | '_ \\ / _` |/ _` | __/ _ \\ | |   / _ \\ / _` | | '_ \\  (_)\n");
            printf(" | |_| | |_) | (_| | (_| | ||  __/ | |__| (_) | (_| | | | | |  _ \n");
            printf("  \\___/| .__/ \\__,_|\\__,_|\\__\\___| |_____\\___/ \\__, |_|_| |_| (_)\n");
            printf("       |_|                                     |___/             \n");

            ///prompts and reads the new username and password
            printf("\nNew Username> ");
            scanf("%s", uname);
            printf("\nNew Password> ");
            getPassword(pwd);
        }
        while(strcmp(uname, "") == 0 || strcmp(pwd, "") == 0);

        fprintf(fp, "%s %s", uname, pwd); ///writes the new username and password to file
        fclose(fp);

        printf("\n\nUsername and Password successfully updated!");
        delay();
    }else
    {
        printf("\n CANNOT UPDATE AT THIS TIME...");
        getch();
    }
}

///updates the username and password of the user that is stored on file
void writeStudentFile(Student st)
{
    FILE *fp;

    if((fp = fopen("StudentInfo.txt", "wb")) == NULL) ///opens 'StudentInfo.txt' for random/binary writing
    {
        printf("ERROR: Required File Could Not Be Opened");
        delay();
    }
    else
    {
        fwrite(&st, sizeof(Student), 1, fp); ///writing student structure to file
        fprintf(fp, "\n");
        fclose(fp);
        printf("\nData written successfully!");
        delay();

    }
}

///reads a 'Student' structure from a random access file and returns it
Student readStudentFile()
{
    FILE *fp;
    Student st;

    if((fp = fopen("StudentInfo.txt", "rb")) == NULL) ///opens 'StudentInfo.txt' for binary/random reading
    {
        printf("ERROR: Required File Could Not Be Opened");
    }
    else
    {
        fread(&st, sizeof(Student), 1, fp); ///reads student structure from file into a structure of the same type (student)
        fclose(fp);
    }

    return st; ///returns what is read from file
}

///checks if 'StudentInfo.txt' contains data
int infoFileEmpty()
{
    FILE *fp = fopen("StudentInfo.txt","ab");

    long fsize = 0;

    if(fp != NULL)
    {
    	fseek(fp, 0, SEEK_END); /// Goes to end of the file
    	fsize = ftell(fp); ///determines size of file based on position (end of file) and stores it in a variable
        rewind(fp); ///returns to the beginning of the file
    	fclose(fp);
    	return (fsize == 0) ? 0 : 1; ///returns 0 or 1 whether the file is empty or not
    }
    else
    {
        return -1; ///returns -1 in case of an error
    }
}


