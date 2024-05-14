#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    uint8_t hex_data = ~0x7f;
    uint8_t num = 100;

    int result = num & hex_data;
    printf("%d", result);

    return 0;
}

