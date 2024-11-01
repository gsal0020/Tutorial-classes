#include <stdio.h>
#include <string.h>

int main(){
    char name[5][15], surname[5][15];
    int age[5], count;
    float wage[5];
    count = 0;
    float temp =0;
    while(count < 5){//populating
        printf("please insert name of employee:\n");
        scanf("%s", name[count]);
        printf("please insert surname of employee:\n");
        scanf("%s", surname[count]);
        printf("please insert age of employee:\n");
        scanf("%d", &age[count]);
        printf("please insert monthly wage of employee:\n");
        scanf("%f", &wage[count]);
        count++;
    }
    printf("How precise do you want to be: (integer value only):");
    int precision;
    scanf("%d",&precision);
    printf("\n%-4s \t%-15s %-15s %-4s %-20s %-30s\n", "No", "Name", "Surname", "age", "Wage(Monthly)", "Wage(13 months)");
    for(short j= 0 ; j < 5; j++){
        printf("%-4hd\t%-15.10s\t%-15.10s\t%-4d\t%-20.*f\t%-30.*f\n",j+1, name[j], surname[j], age[j],precision, wage[j],precision, wage[j]*13);
     temp += wage[j]; 
    }
    float average_wage = temp / 5;
    printf("the average wage is:%f ", average_wage);
}//the question did not ask to check data entries. But to make the code better it would be better to check for age to be < 100.
