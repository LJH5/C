#include <stdio.h>

typedef struct
{
    int a;
    int b;
    int c;
} Th_TypeDef;


int main(int argc, char const *argv[])
{
    /* code */
    static Th_TypeDef *point_var = NULL;

    Th_TypeDef test_var;

    test_var.a = 1;
    test_var.b = 2;
    test_var.c = 3;

    point_var = &test_var;

    printf("%d\n", &point_var[0]);
    printf("%d\n", &point_var->a);
    printf("%d\n", point_var->a);

    printf("%d\n", &test_var);
    printf("%d\n", test_var);
    printf("%d\n", &test_var.a);

    return 0;
}
