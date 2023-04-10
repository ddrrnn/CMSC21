#include <stdio.h>

int main()
{
    //Number of days in a month (28, or 30, or 31 only)
    int totaldays;
    printf("Enter number of days in a month: ");
    scanf("%d", &totaldays);

    //Day in the week (1-7 only)
    int startday;
    printf("Enter the starting day of the week(1=Sun, 7=Sat): ");
    scanf("%d", &startday);

    switch(totaldays){
        case 31: case 30: case 28:

            switch(startday){
                case 1 ... 7:
                printf("\n");

                //leaves blank from 1st day to startday
                for(int i = 1; i < startday; i++){
                    printf("\t");
                }

                //iterates through the number of days in the month
                for (int i = 1; i <= totaldays; i++) {
                    printf("%d\t", i);

                    //this formula counts the number of days in the week (startday-inclusive)
                    if ((i + (startday - 1)) % 7 == 0) {  // it starts a new row if it reaches the end of the week
                        printf("\n");
                    }
                }
                break;
                //errors if cases don't match with 1-7
                default: 
                printf("\nInvalid day number. Please try again.\n");
            }
        break;
        //errors if cases don't match with 30,31, or 28
        default:
        printf("\nInvalid number of days. Please try again.\n");
    }  
    return 0;
}



    
