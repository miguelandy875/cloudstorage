## Project: 0x0D. C - Preprocessor
### Tasks:
- [0-object_like_macro.h](https://github.com/miguelandy875/alx-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h) Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
### _Usage:_ 
```c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```
- [1-pi.h](https://github.com/miguelandy875/alx-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h) Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
### _Usage:_ 
```c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```
- [2-main.c](https://github.com/miguelandy875/alx-low_level_programming/blob/master/0x0D-preprocessor/2-main.c) Write a program that prints the name of the file it was compiled from, followed by a new line.
- [3-function_like_macro.h](https://github.com/miguelandy875/alx-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h) Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
### _Usage:_ 
```c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
```
- [4-sum.h](https://github.com/miguelandy875/alx-low_level_programming/blob/master/0x0D-preprocessor/4-sum.h) Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.
### _Usage:_ 
```c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
```
