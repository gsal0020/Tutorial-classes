#include <stdio.h>

int main(){
    printf("This program performs a math function.\n");
    printf("please insert an integer number to perform the n!\n");
    int n = 0;
    scanf("%d", &n);
    int temp = 1;
    for(int i=1; i <= n; i++){
        temp *= i;
    }
    printf("%d", temp);
}
