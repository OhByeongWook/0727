#include <stdio.h>

int main()
{
    int *numPtr;
    int num1 = 10;

    numPtr = &num1;
    
    printf("&numPtr = %d\n", &numPtr);
    printf("numPtr = %d\n", numPtr);
    printf("*numPtr = %d\n", *numPtr);
    printf("&num = %d\n", &num1);
    printf("num = %d", num1);

}