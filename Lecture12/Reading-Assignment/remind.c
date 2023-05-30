#include <stdio.h> 
#include <string.h> 

#define MAX_REMIND 50 /* maximum number of reminders */ 
#define MSG_LEN 60 /* max length of reminder message */

int read_line(char str[], int n); 

//function that reads the reminders
int read_line(char str[], int n){
    int ch, i = 0;

    //gets characters until newline
    while ((ch = getchar()) != '\n')
        if (i < n){
            str[i++] = ch;
        }
    str[i] = '\0';
    return i;
}

int main(void) 
{  
    char reminders[MAX_REMIND][MSG_LEN+3]; //array that stores reminders
    char day_str[3], msg_str[MSG_LEN+1]; //stores day and reminder message
    int day, i, j, num_remind = 0;

    for (;;) { //breaks when the maximum number of reminders is reached or when the user enters 0 as the day
        if (num_remind == MAX_REMIND) { 
            printf("-- No space left --\n"); 
            break; 
        } 

        //gets user input
        printf("Enter day and reminder: ");
        scanf("%2d", &day); 
        if (day == 0) 
            break; 
        //convert day into string
        sprintf(day_str, "%2d", day);

        read_line(msg_str, MSG_LEN); //read reminder message

        //arranges the reminder by comparing day_str with the reminders
        for (i = 0; i < num_remind; i++) {
            if (strcmp(day_str, reminders[i]) < 0) 
                break; 
        }

        //copies the reminders when new reminder is added, and makes space for insertion
        for (j = num_remind; j > i; j--) 
            strcpy(reminders[j], reminders[j-1]); 

        strcpy(reminders[i], day_str); //copy the day_str to the reminders array
        strcat(reminders[i], msg_str); //cncatenate the message to the reminders array

        num_remind++; //increment the reminder count
    }

    //prints each reminder
    printf("\nDay Reminder\n"); 
    for (i = 0; i < num_remind; i++) {
        printf(" %s\n", reminders[i]); 
    }

    return 0; 
}
