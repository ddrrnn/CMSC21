#include <stdio.h> 
#include <string.h> 

#define NUM_PLANETS 9

int main(int argc, char *argv[]) 
{ 
    char *planets[] = { "Mercury", "Venus", "Earth", 
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"}; 

    int i, j;

    //loops through the command-line arguments
    for (i = 1; i < argc; i++) { 
        //loops through the planets array
        for (j = 0; j < NUM_PLANETS; j++) {
            //compares the current argument with the planet name
            if (strcmp(argv[i], planets[j]) == 0){ 
                //if it is a match, print the planet name and its position
                printf("%s is planet %d\n", argv[i], j + 1) ;
                break;
            }
        }

            // if they do not match
        if (j == NUM_PLANETS){ 
            printf("%s is not a planet\n", argv[i]); 
        }
    }

    return 0; 
}
