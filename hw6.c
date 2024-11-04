
#include <stdio.h>

int main() {
    int numbers[5];
    int odd_numbers[5], even_numbers[5];
    int odd_count = 0, even_count = 0;

    printf("다섯 개의 정수를 입력하세요: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            even_numbers[even_count++] = numbers[i];
        } else {
            odd_numbers[odd_count++] = numbers[i];
        }
    }

    printf("홀수: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_numbers[i]);
    }
    printf("\n");

    printf("짝수: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_numbers[i]);
    }
    printf("\n");

    return 0;
}
