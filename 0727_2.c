#include <stdio.h>

void main(void)
{
    int data = 10;
    int *ptr;

    printf("&data : %d, data : %d \n", &data, data);

    ptr = &data;

    printf("&ptr : %d, ptr : %d \n", &ptr, ptr);
    printf("*ptr : %d, data : %d\n", *ptr, data);
    printf("&ptr : %d%, ptr : %d, *ptr : %d\n", &ptr, ptr, *ptr);
}