#include <stdio.h>

#define DOLLAR_CONVERSION  0.92; // making conversion as a constant.
int main(){
    printf("Please insert amount of dollars to be converted: ");
    float dol_amount = 0;
    scanf("%f", &dol_amount);
    float euro = dol_amount * DOLLAR_CONVERSION;
    printf("please insert precision value(Zeros after comma):\n");
    int precision = 0;
    scanf("%d", &precision);
    printf("%.*f dollars are equivalent to: %.*f\n ",precision, dol_amount,precision , euro);


    
    return 0;
}
