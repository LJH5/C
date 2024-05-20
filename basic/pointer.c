#include <stdio.h>

typedef struct
{
    int a;
} Struct_TypeDef;

int main(int argc, char const *argv[])
{
    int a = 1;
    int *p = &a;
    printf("%d\n", p);
    printf("%d\n", a);

    int arr[5] = {0, 1, 2, 3, 4};
    printf("%d\n", arr);
    printf("%d\n", &arr[0]);


    Struct_TypeDef struct_var;
    struct_var.a = 1;
    printf("%d\n", &struct_var);
    printf("%d\n", struct_var);
    printf("%d\n", struct_var.a);

    return 0;
}
