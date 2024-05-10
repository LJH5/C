#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    int *p = &a;
    printf("%d\n", p);
    printf("%d\n", a);
    return 0;
}
