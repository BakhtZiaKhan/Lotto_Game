/*Made by: Bakht Zia Khan 
  Date:21/11/2021
  Description:This is a simple maths game where the user is asked to input a number between 1 and 4. Pressing 1 will ask the user to input the amount of questions they will be asked. Pressing 2 will then generate random questions which they will answer. Pressing 3 will display the amount of questions they got correct or wrong. Pressing 4 will exit the game. After each number besides 4  is pressed they will send back to the menu.*/

#include <stdio.h>
#include <stdlib.h> //Needed for random numbers

int main()
{
    int choice = 0;
    int rounds = 0;
    int i = 0;
    int num1, num2, total;
    char Questions;
    int correct = 0;
    int wrong = 0;
    int answer = 0;
    char clear;
    char results;

    do
    {

        printf("                ---------------------Menu---------------------\n");
        printf("Press 1 to enter number of questions that will be asked in this round\n");
        printf("\nPress 2 to start and play quiz\n");
        printf("\nPress 3 to Display the number of questions that were answered correctly or incorrectly for this round\n");
        printf("\nPress 4 to exit program\n"); //otherwise Prints invalided
        scanf("%d", &choice);
        clear = getchar(); //Stops repeating

        switch (choice)
        { //Start of switch
        
        case 1:
            wrong = 0;
            correct = 0;
            printf("Enter number of question you would like to asked (Max=5)\n");
            scanf("%d", &rounds);
            printf("Now press 2\n");
            //Error checking
            if ((rounds > 0 && rounds <= 5) && !(rounds >= 'a' && rounds <= 'z'))
            {
                continue;//continues only if number are under 5 and are not characters .
            } // end if
            else
            { //start of else
                printf("Not valid! Try again\n");
            }      //End of if else

            break; //break ensures all cases arent printed at once

        case 2:
            for (i = 0; i < rounds; i++)
            {
                num1 = (rand() % 10) + 1; //% 10 to ensure single digit numbers used in questions.
                num2 = (rand() % 10) + 1;
                total = num1 * num2;
                printf("%d x %d : ", num1, num2);
                scanf("%d", &answer);
                results = getchar();//Stops results including  last rounds results

                //check to see if right answer
                if (answer == total && results != (choice >= 'a' && choice <= 'z'))
                {
                    printf("\ncorrect\n");
                    correct++;
                } //end if
                // Incorrect answer
                else
                {
                    printf("\n Inncorect answer = %d\n", total);
                    wrong++;
                } // end else
            }     //End for

            break;

        case 3:
            if (choice == 3 && (correct <= 0 && wrong <= 0))
            {
                // else if used to error check input 2 before 3
                printf("Must choose option 2 before option 3\n");
            } //end else if

            else if (choice == 3 && (correct > 0 || wrong > 0)) //Ensures option 2 is pciked before 3
            {
                // only display 3 when correct or wrong has a value greater than 0
                printf("\nCorrect = %d\n", correct);
                printf("\nwrong = %d\n", wrong);
            } // end else if
            break;

        case 4:
            printf("Exit was chosen");
            break;

        default:
            printf("\nInvalid option pick a NUMBER between 1 and 4 \n");
            break;

        } //End of switch

    } while (choice != 4); //End of while

    return 0;

} //End main