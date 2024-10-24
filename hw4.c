#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int a, swich;
    scanf("%d", &a);
    swich = 0;  // 처음엔 소수로 가정

    // 2부터 a-1까지 나누어 떨어지는 수가 있는지 확인
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            swich = 1;  // 소수가 아님
            break;      // 약수가 발견되면 더 이상 확인하지 않고 종료
        }
    }

    // 루프가 끝난 후 swich에 따라 결과 출력
    if (swich == 0)
        printf("it is a prime number\n");  // 소수인 경우
    else
        printf("it is not a prime number\n");  // 소수가 아닌 경우

    return 0;
}
