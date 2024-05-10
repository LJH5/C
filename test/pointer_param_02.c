#include <stdio.h>

// 함수 포인터 타입: int 2개를 입력받고 int를 리턴하는 함수의 주소를 저장
typedef int (*set_param)(int a, int b);

set_param param_b;

void set_func(set_param func_sp);
int sum_func(int a, int b);
int sub_func(int a, int b);

int main() {

    set_param param_a;
    param_b = &sum_func;
    int num = param_b(2, 1);
    printf("%d\n", num);

    set_func(&sub_func);
    num = param_b(2, 1);
    printf("%d\n", num);

    return 0;
}


void set_func(set_param func_sp)
{
    param_b = func_sp;
}

int sum_func(int a, int b)
{
    printf("sum_func\n");
    return a + b;
}

int sub_func(int a, int b)
{
    printf("sub_func\n");
    return a - b;
}