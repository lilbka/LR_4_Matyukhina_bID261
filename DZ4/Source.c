#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() //вариант 18
{
    setlocale(LC_ALL, "RUS");
    int a, b, c;
    printf("введите число a:");
    puts;
    scanf("%d", &a);
    printf("введите число b:");
    puts;
    scanf("%d", &b);
    printf("введите число c:");
    puts;
    scanf("%d", &c);
    int ostA = a % 3;
    int ostB = b % 3;
    int ostC = c % 3;
    int s = ostA + ostB + ostC;
    printf("a = %d, остаток a = %d\n", a, ostA);
    printf("b = %d, остаток b = %d\n", b, ostB);
    printf("c = %d, остаток c = %d\n", c, ostC);
    printf("сумма остатков = %d\n", s);
    printf("гипотеза подтверждается, если сумма остатков = 0. в ином случае - гипотеза не подтверждена.\n");
}