#include <stdio.h>
#include <stdint.h>

typedef int (*test_param)(uint8_t a, uint8_t b, uint8_t c);

int add(uint8_t a, uint8_t b, uint8_t c) {
    return a + b + c;
}

int subtract(uint8_t a, uint8_t b, uint8_t c) {
    return a - b - c;
}

int main() {
    test_param param;

    // add 함수의 주소를 함수 포인터에 할당
    param = &add;
    int result = param(1, 2, 3); // add 함수 호출

    printf("Result: %d\n", result); // 출력: 6

    // subtract 함수의 주소를 함수 포인터에 할당
    param = &subtract;
    result = param(1, 2, 3); // subtract 함수 호출

    printf("Result: %d\n", result); // 출력: -4

    return 0;
}

