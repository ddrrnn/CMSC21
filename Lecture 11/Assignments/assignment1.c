//Duranne B. Duran
//Assignment number 1

#include <stdio.h>
#include <ctype.h> /*toupper, isalpha*/
#include <stdbool.h>

void scan_word(int occurences[26]){
char c;
    while ((c = getchar()) != '\n'){ //checks if the character stored in c is not the new line character
        if (isalpha(c)){
            occurences[toupper(c) - 'A']++; //maps the index to occurence array and increments it
            }
        }
    }

bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    //checks if the values of both arrays are equal
    //iterates through occurences array
    for (int i = 0; i < 26; i++) { 
        if((occurrences1[i] != occurrences2[i])){
            return false; //returns false if not equal
        }
    }
    return true;
}

int main(void){
    int letters1[26] = {0};
    int letters2[26] = {0};

    printf("Enter first word: ");
    scan_word(letters1); //call function to scan first word

    printf("Enter second word: ");
    scan_word(letters2); //call function to scan second word

    bool same = is_anagram(letters1, letters2); //'same' will hold the return value of is_anagram

    if (same){ //if true
        printf("The words are anagrams.\n");
        return 0;
    }// if false
    printf("The words are not anagrams.\n");
    return 0;
}