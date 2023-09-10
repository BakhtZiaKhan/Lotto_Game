/*Made by :Bakht Zia Khan
Date:3/19/2022
Descrpition: A program which asks the user to enter 6 numbers.
These numbers will be sorted into ascedning order and compared to lotto winning numbers, frequency of numbers will be calculated aswell
If 3 or more numbers match a prize will be won*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
#define BSIZE 43
//Signature 
void *Usersnum(int *User_num, int *errorcheck);
void *Shownums(int *printnum);
void Order(int[]);
void Match(int *User_num, int *Win);
void frequency(int *errorcheck);

int main()
{
    int choice = 0;
    int i;
    int a;
    char d;
    int errorcheck[43] = {0};
    int User_num[6] = {0};
    int Win[SIZE] = {1, 3, 5, 7, 9, 11}; // Winning lotto numbers
    int *inputnums;
    int show;

    do
    {

        printf("                ---------------------Menu---------------------\n");
        printf(" Press 1 and enter 6 numbers betweeen 1-42 (repepition is not allowed )\n");
        printf("\nPress 2 to display the numbers you have enter  \n");
        printf("\nPress 3 to arrage the number entered into to  ascending order (smallest to biggest )\n");
        printf("\nPress 4 to compare entered numbers to winning lotto numbers \n");
        printf("\nPress 5 to display the frequency of the numbers entered \n");
        printf("\nPress 6 to exit program\n"); // otherwise Prints invalided
        scanf("%d", &choice);
        d = getchar(); // Stops repeating

        switch (choice)
        { // Start of switch
        case 1:

            // User inputs numbers
            inputnums = Usersnum(User_num, errorcheck);

            break; // break ensures all cases arent printed at once

        case 2:

            Shownums(User_num);
            break;

        case 3:

            Order(inputnums);
            break;

        case 4:

            Match(inputnums, Win);
            break;

        case 5:
            frequency(errorcheck);

            break;

        default:
            printf("\nInvalid option pick a NUMBER between 1 and 6 \n");
            break;

        }                  // End of switch
    } while (choice != 6); // End of while

    return 0;

} // End main


// Case 1
void *Usersnum(int *User_num, int *errorcheck)
{
    int i;
    int a;
    int tempArray;
    char d;

    printf("Enter %d numbers from 1 - %d numbers can not be repeated :\n ", SIZE, BSIZE);
    for (int i = 0; i < 6; i++)
    {

        scanf("%d", &*(User_num + i));
        d = getchar(); //

        if (*(User_num + i) > 0 && *(User_num + i) < 43)
        {
            for (int a = 0; a < i; a++)
            {
                // Ensures numbers arent repeated
                if (*(User_num + i) == *(User_num + a))
                {
                    printf("Repeated numbers are not allowed enter two new numbers  \n");
                    *(User_num + i) = 0;
                    break;
                }

            } // Exit Loop because reapeted numbers
            if (*(User_num + i) == 0)
            {
                printf("");
                scanf("%d", &*(User_num + i));
            } // end if
        }
        else
        {
            printf("Only Numbers 1-43 will be accepted ");
            *(User_num + i) = 0;
        }                         // end else
        if (*(User_num + i) == 0) // Allows new numbers to be entered after error checking is commenced
        {
            printf("");
            scanf("%d", &*(User_num + i));
        } // end if

        tempArray = *(User_num + i);                               // Places last round numbers into temporary array
        *(errorcheck + tempArray) = *(errorcheck + tempArray) + 1; // Stores last rounds numbers into temporary array used for option 5
    }                                                              // end for
    return User_num;
} // End of option 1 Usersnum

// Case 2
void *Shownums(int *show)
{
    int i;

    printf("Numbers entered are : ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", *(show + i));
        if (i < 5)
        {
            printf(", ");
        } // end if
    }     // end for
    printf("\n");

} // End of Shownums

// Case 3
void Order(int ascending[]) // Orders User numbers into ascending numbers
{
    int i;
    int j;
    int temp;

    // Bubble sort used to make User numbers into ascending order
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (*(ascending + i) > *(ascending + j))
            {
                // Elements being swapped are put into temporary variable
                temp = *(ascending + i);
                *(ascending + i) = *(ascending + j);
                *(ascending + j) = temp;
            } // end if
        }     // end for
    }         // end for

    printf("User entered numbers in ascending order : ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", *(ascending + i));
        if (i < 5)
        {
            printf(", ");
        } // end if
    }     // end if
    printf("\n");
} // End of Order

// Case 4
void Match(int *User_num, int *Win)
{
    int correct = 0; // correct numbers are numbers which match with the winning numbers
    int i;
    int a;

    // Compares user numbers to winning numbers
    for (i = 0; i < 6; i++)
    {
        for (a = 0; a < 6; a++)
        {
            if (*(Win + a) == *(User_num + i))
            {
                correct++;

            } // end if

        } // end for

    } // end out for

    if (correct == 6)
    {
        printf("You won the Jackpot\n");
    } // end if
    else if (correct == 5)
    {
        printf("You won a new Car\n");
    } // end else if
    else if (correct == 4)
    {
        printf("You won a Weekend Away!\n");
    } // end else if
    else if (correct == 3)
    {
        printf("You won a Cinema Pass\n");
    } // end else if
    else
    {
        printf("\nNothing was won\n\n");
    } // end else
} // End of Match

// Case 5
void frequency(int *errorcheck)
{
    int i;

    for (int i = 0; i < 43; i++) // Displaying frequency of all numbers entered before program is exited
    {
        if (*(errorcheck + i) != 0)
        {
            printf("\nNumber %d was entered a total of  %d times\n", i, *(errorcheck + i));
        } // end if

    } // end for

} // End of Frequency
