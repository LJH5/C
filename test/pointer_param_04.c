#include <stdio.h>

typedef struct {
    int (*arr)[5];
	int a;
    int b;
    int c;
} My_Test_TypeDef;

void test_func(My_Test_TypeDef *head)
{
    printf("%d", head->a);
}

int main(int argc, char const *argv[])
{
    My_Test_TypeDef *test_var = NULL;

    test_var->a = 1;

    printf("%d\n", test_var -> a);

    test_func(&test_var[0]);

    /* code */
    return 0;
}
