#include <stdio.h>
#include <string.h>

void Reverse(char word[]) {
    int counter = strlen(word) - 1;
    while (counter >= 0) {// using >= to also print 1st char
        printf("%c", word[counter]);
        counter--;
    }
    printf(" "); 
}

int main() {
    char word[30], word2[30], word3[30];

    printf("Please insert the first word: ");
    scanf("%s", word);
    printf("Please insert the second word: ");
    scanf("%s", word2);
    printf("Please insert the third word: ");
    scanf("%s", word3);

    printf("Inserted words: %s %s %s\n", word, word2, word3);
    printf("Printing the words in reverse: ");
    Reverse(word);
    Reverse(word2);
    Reverse(word3);

    printf("\n"); 
    return 0; 
}
