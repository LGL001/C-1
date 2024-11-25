
#include <stdio.h>

char convCase(char ch)
{
    // 모든 문자의 대소문자간 차의 크기는 같다.
    const int diff = 'a' - 'A'; 
    if (ch >= 'A' && ch <= 'Z') // 대문자인 경우
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z') // 소문자인 경우
        return ch - diff;
    else // 다른 문자는 그대로 반환
        return ch;
}

int main(void)
{
    char input[100]; // 입력받을 문자열
    printf("문자열 입력: ");
    fgets(input, sizeof(input), stdin); // 문자열 입력

    for (int i = 0; input[i] != '\0'; i++)
    {
        input[i] = convCase(input[i]); // 각 문자를 변환
    }

    printf("변환된 문자열: %s", input); // 변환된 문자열 출력
    return 0;
}
