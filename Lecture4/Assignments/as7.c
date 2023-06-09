#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N ((int) (sizeof(road_networks) / sizeof(road_networks[0]))) // define size of array as a macro

int main() {
    bool road_networks[9][9] = {
        {1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1}
    };

    //display the adjacency matrix
    printf("Adjacency Matrix:\n");
    printf("\ta\tb\t[c]\t[d]\te\tf\tg\th\ti\n");
    for (int i = 0; i < N; i++) {
        switch(i) {
            case 2:
            printf("[c]");
                break;
            case 3:
            printf("[d]");
                break;
            default:
                printf("%c", 'a' + i); //convert int to char
        }
        for (int j = 0; j < N; j++) {
             if (road_networks[i][j] && (j == 2 || j == 3)) {
                printf("\t[%d]", road_networks[i][j]);
            } else {
                printf("\t%d", road_networks[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    //get starting point
    int start;
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I\n\n");
    scanf("%d", &start);

    //convert to uppercase letter
    char startChar = toupper(start + 'a');

    //cases for each station
    switch(start){
        case 0: case 1: case 5:
            printf("At point: %c", startChar);
            printf("\nC arrived to charging station.");
        break;

        case 2:
            printf("At point: %c", startChar);
            printf("\nC is a charging station.");
        break;

        case 3:
            printf("At point: %c", startChar);
            printf("\nD is a charging station.");
        break;

        case 4: case 6:
            printf("At point: %c", startChar);
            printf("\nD arrived to charging station.");
        break;

        case 7: case 8:
            printf("At point: %c", startChar);
            printf("\nNo nearby charging station.");
        break;

        default:
        printf("The station does not exist.");
    }
}
