#include <stdio.h>

int main()
{
    int value = 10;
    int *ptr;

    ptr = &value;

    printf("value 값 = %d\n", value);
    printf("*ptr 값 = %d\n", *ptr);
    printf("value 주소 = %d\n", &value);
    printf("ptr 값 = %d\n", ptr);
    printf("&ptr 주소 = %d\n", &ptr);

    *ptr  = *ptr + 3;
    printf("*ptr 값 = %d\n", *ptr);
    printf("value 값 = %d\n", value);

    return 0;
}