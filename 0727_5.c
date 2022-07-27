#include <stdio.h>

int main()
{
    char buf[6] = {'a','b','c','d','e','f'};
    char *ptr = buf;

    int i = 0;
    printf("ptr을 1씩 증가시켜 봅시다\n");

    for(i = 0; i < 6; i++)
    {
        printf("ptr : %d, *ptr : %c\n", ptr, *ptr);
        ptr++;
    }
    printf("\n다시 ptr이 buf를 가리키게 합시다\n");
    ptr = buf;

    printf("*ptr++의 결과\n");
    *ptr++;
    printf("ptr : %d, *ptr : %c\n", ptr, *ptr);

    printf("*(ptr++)의 결과\n");
    *(ptr++);
    printf("ptr : %d, *ptr : %c\n", ptr, *ptr);

    printf("--ptr을 하고  *(ptr++)의 결과\n");
    --ptr;
    *(ptr++);
    printf("ptr : %d, *ptr : %c\n", ptr, *ptr);
    printf("(*ptr)++의 결과\n");
    (*ptr)++;
    printf("ptr : %d, *ptr : %c\n", ptr, *ptr);

    printf("ptr += 1을 하고 *ptr의 결과 \n");
    ptr += 1;
    printf("ptr : %d, *ptr : %c\n", ptr, *ptr);

    printf("ptr -= 2를 하고 *ptr의 결과\n");
    ptr -= 2;
    printf("ptr : %d, *ptr : %c\n", ptr, *ptr);
}