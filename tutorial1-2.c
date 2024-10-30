#include <stdio.h>

int main(){
    int dogs;
    int cat;
    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you havve %d dog(s)\n", dogs);
    printf("How many cats do you have?\n");
    scanf("%d", &cat);
    printf("So you have %d cat(s)\n", cat);
    int pets= cat + dogs;
    printf("So in total you have %d dog(s) and %d cat(s), therefore you have %d pets.", dogs, cat, pets);
    return 0;
}
