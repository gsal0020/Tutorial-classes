#include <stdio.h>

int main(){
   int day[10], week[10];
   for(int i = 0; i<=2; i++){
       printf("please insert number of days: ");
       scanf("%d", &day[i]);
       while(day[i] > 7){ 
            if(day[i] > 7){
                week[i]++;
                day[i] = day[i]-7;
           }  
       }
       printf("Number inserted is equivalent to %d weeks and %d days\n",  week[i], day[i]);
   }
}
