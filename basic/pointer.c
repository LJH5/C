#include <stdio.h>

typedef struct
{
    int a;
    int b;
} Struct_TypeDef;

int main(int argc, char const *argv[])
{
    int a = 1;
    int *p = &a;
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%d\n\n", a);

    int arr[5] = {0, 1, 2, 3, 4};
    printf("%d\n", arr);
    printf("%d\n\n", &arr[0]);

    int *pointer;
    pointer = arr;
    printf("%d\n\n", pointer[1]);
    printf("%d\n\n", pointer[2]);


    Struct_TypeDef struct_var;
    struct_var.a = 1;
    struct_var.b = 2;

    printf("%d\n", &struct_var);
    printf("%d\n", struct_var);
    printf("%d\n", struct_var.a);
    printf("%d\n\n", &struct_var.b);

    Struct_TypeDef *pointer_var;
    pointer_var = &struct_var;
    printf("%d\n", &pointer_var[0]);
    printf("%d\n\n", &pointer_var[1]);

    return 0;
}
