#include <stdio.h>
#include <stdlib.h>

void StockCalculator(int paper, int user_ordered_quantity){
    int new_stock = paper - user_ordered_quantity;
    printf("The new stock is %d.\nYou have ordered %d pack of papers.\n", new_stock, user_ordered_quantity);
    }
int user_ordered_quantity(){
    int order_quantity;
    printf("Please insert quantity to order.\n"); 
    scanf("%d", &order_quantity);
    return order_quantity;
}

void Order_Validation(int user_value){
    if(user_value < 0 || user_value > 1000){
        printf("Invalid number inserted. Please enter a number between 0 to 1000.\n");
        exit(0);
    }
}


int main(){
    int A3,A4,A5;
    A3 = 1000;
    A4 = 1000;
    A5 = 1000;
    int user_value, user_item ,quantity;
    printf("What type of paper do you want to order?\n 1.A3 \n 2.A4\n 3.A5\n");
    scanf("%d", &user_item);
    switch(user_item){
        case 1: printf("Ordering A3 paper.\n");
                quantity = user_ordered_quantity();
                Order_Validation(quantity);
                StockCalculator(A3, quantity);
                break;
        case 2: printf("Ordering A4 paper.\n");
                quantity = user_ordered_quantity();
                Order_Validation(quantity);
                StockCalculator(A4, quantity );
                break;
        case 3: printf("Ordering A5 paper.\n");
                quantity = user_ordered_quantity();
                Order_Validation(quantity);
                StockCalculator(A4, quantity);
                break;
        default: printf("invalid paper selected.\n");
    }
     
    
    return 0;
}
