#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double A;
    printf("Please enter kilometers :");
    scanf("%lf", &A); 
    printf("%.1f km is equal to %.1f miles",A, A / 1.609);  
    return 0;
}
