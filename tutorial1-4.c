#include <stdio.h>

void butler(char name[]){
    printf("You rang, %s .\n", name);
}

int main(){
    printf("Hello user. what is your name?");
    char name[15];
    scanf("%s", &name);

    printf("I will summon the butler function.\n");
    butler(name);
    printf("Yes.Bring me some tea and some writeable CD-ROMS.\n");
    return 0;

    
}

