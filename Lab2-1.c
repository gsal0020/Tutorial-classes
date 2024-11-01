#include <stdio.h>

int main(){
    int num1;
    printf("Please insert number to be converted in char: \n");
    scanf("%d", &num1);
    printf("The int %d inserted results in the char %c", num1 , num1);
    return 0;
}
