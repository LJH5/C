#include <stdio.h>

void Switch_data(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {0, 1, 2, 3, 4};

    Switch_data(&arr[2], &arr[3]);

    printf("%d, %d\n", arr[2], arr[3]);

    return 0;
}
