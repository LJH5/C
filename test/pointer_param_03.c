#include <stdio.h>

void simple_func(int num)
{
    num = 10;
    printf("simple_func: %d\n", num);
}

void pointer_func(int* num)
{
    *num = 11;
    printf("pointer_func num addr: %d\n", num);
    printf("pointer_func num value: %d\n", *num);

}

int main(int argc, char const *argv[])
{
    int a = 0;

    simple_func(a);
    printf("main: %d\n", a);

    printf("main a addr: %d\n", &a);
    pointer_func(&a);
    printf("main: %d\n", a);

    return 0;
}
