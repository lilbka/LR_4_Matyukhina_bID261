#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int zad1() 
{
	setlocale(LC_ALL, "RUS");
    char   c = '!';
    int    i = 2;
    float  f = 3.14f;
    double d = 5e-12;
    printf("c = %c\n", c);
    printf("i = %d\n", i);
    printf("f = %f\n", f);
    printf("d = %e\n", d);
    printf("введите символ c:");
    puts;
    scanf("%c", &c);
    printf("введите число i:");
    puts;
    scanf("%d", &i);
    printf("введите вещественное число f:");
    puts;
    scanf("%f", &f);
    printf("введите вещественное число d:");
    puts;
    scanf("%lf", &d);
    printf("введЄнные значени€:");
    puts;
    printf("c = %c\n", c);
    printf("i = %d\n", i);
    printf("f = %f\n", f);
    printf("d = %e\n\n\n", d);

    //задача 1а
    double x, drob;
    int cel;
    printf("введите вещественное число:");
    puts;
    scanf("%lf", &x);
    cel = (int)x;
    drob = x - cel;
    printf("цела€ часть = %d\n", cel);
    printf("дробна€ часть = %f\n\n\n", drob);

    //задача 1б
    char e;
    printf("введите символ:");
    puts;
    scanf(" %c", &e);
    printf("дес€тичный код: %d\n", e);
    printf("шестнадцатеричный код: %x\n\n\n", e);

    //задача 1в
    int u;
    printf("введите целое число:");
    puts;
    scanf(" %d", &u);
    printf("1/%d = %f\n\n\n", i, 1.0/u);
}

int zad2()
{
    int a = 10;
    int b = 3;
    int    x;
    float  y;
    double z;
    x = a / b;
    y = a / b;
    z = a / b;
    printf("x(int)= %d\n", x); //остаток отметаетс€, результат 9/3
    printf("y(float)= %f\n", y);
    printf("z(double)= %f\n", z);
    printf("(float)a/b = %f\n", (float)a/b); //b - тоже float
    printf("(double)a/b = %f\n", (double)a/b); //b - тоже double
    printf("(float)(a/b) = %f\n", (float)(a/b)); // сначала целочисленное деление (как в первом случае), затем преобразование во float
    printf("(double)(a/b) = %f\n", (double)(a/b));
}

int zad3()
{
    int n;
    printf("введите целое трЄхзначное число:");
    puts;
    scanf("%d", &n);
    int last = n%10;
    int first = n/100;
    int mid = n/10%10;
    int sum = first + mid + last;
    int rev = last * 100 + mid * 10 + first;
    printf("последн€€ цифра %d, перва€ - %d, сумма цифр %d, число наоборот %d\n",last, first, sum, rev);
}

int main()
{
	zad1();
    zad2();
    zad3();
}