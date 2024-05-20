#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    int b = 120;
    int c = 0;

    // c = a > b || a == 1 ? a : b;
    
    c = 1 || 120;

    printf("%d", c);

    return 0;
}
