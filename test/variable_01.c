#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    /* code */
    uint32_t a = 84000000;
    uint8_t b = 60;

    printf("%d", a * b / a);
    // 60?

    return 0;
}
