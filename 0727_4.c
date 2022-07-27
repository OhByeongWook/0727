#include <stdio.h>

int main()
{
    int num[4] = {10,20,30,40};
    int *ptr;
    int i;
    ptr = num;

    printf("&num = %d\n");
    for(i=0; i<=3; i++)
    {
        printf("&num[%d] = %d, num[%d] = %d\n", i, &num[i], i, num[i]);
    }
    printf("\n\n");

    printf("ptr=%d, *ptr = %d\n",ptr, *ptr);

    *ptr++;
    printf("ptr=%d, *ptr = %d\n",ptr, *ptr);

    (*ptr)++;
    printf("ptr=%d, *ptr = %d\n",ptr, *ptr);

    ++*ptr;
    printf("ptr=%d, *ptr = %d\n",ptr, *ptr);

    *++ptr;
    printf("ptr=%d, *ptr = %d\n",ptr, *ptr);

}