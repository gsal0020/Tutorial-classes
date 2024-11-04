#include <stdio.h>

int main(void)
{
    long num = 0;
    long sum = 0L;
    int status = 1;

    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter the integers (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
