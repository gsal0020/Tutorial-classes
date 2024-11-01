#include <stdio.h>
#include <math.h>

double zetaFunction(int iteration, double s){
    double result = 0;
    
    for(int i = 1; i <= iteration; i++){
        result += 1.0/pow(i , s);
        printf("%lf ", result);
    } 
    return result;
}
int main(){
    int iteration = 0;
    double s = 0;
    printf("please insert number of iterations:");
    scanf("%d", &iteration);
    printf("please insert power: \n");
    scanf("%lf", &s);
    printf("%lf is the result of the Reimann zeta function.", zetaFunction(iteration , s));
     

    return 0;
}
